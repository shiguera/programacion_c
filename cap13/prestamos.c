#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CELDAS 4
#define MAX_NOMBRE 81
#define MAX_FECHA  11

typedef struct {
    char titulo[MAX_NOMBRE];
    char autor[MAX_NOMBRE];
} Libro;

typedef struct {
    Libro libro;
    char tomador[MAX_NOMBRE];
    char fecha[MAX_FECHA];
} FichaPrestamo;

typedef struct {
    FichaPrestamo prestamo;
    bool ocupada;
} Celda;

typedef Celda ListaPrestamos[MAX_CELDAS];

void inicializar(ListaPrestamos lista);
bool alta(ListaPrestamos lista, FichaPrestamo ficha);
int buscar(ListaPrestamos lista, char* titulo);
bool devolver(ListaPrestamos lista, char* titulo);
void listar(ListaPrestamos lista);

int main() {
    ListaPrestamos lista = {
        {{{"Programming in C", "Kochan"},"Felipe","20/02/2025"}, true},
        {{{"Design Patterns", "Gang of Four"},"Rosa","18/04/2025"}, true},
        {{{"",""}, "", ""}, false},
        {{{"Clean Code", "R.C. Martin"},"Santiago","12/05/2025"}, true},
    };

    Libro libro = {"Programación en C", "SHiguera"};
    FichaPrestamo ficha = {libro, "Elisa", "13/12/2024"};
    bool result1 = alta(lista, ficha);
    bool result2 = alta(lista, ficha);
    printf("%d %d\n", result1, result2);

    // Ej 4 y 5
    char titulo[] = "Design Patterns";
    bool result = devolver(lista, titulo);
    if(result == true) {
        printf("Se devolvió: \"%s\"\n", titulo);
    } else {
        printf("No se encontró: \"%s\"\n", titulo);
    }
    printf("\n");

    // Ej 6
    listar(lista);
    
    return 0;
}

void inicializar(ListaPrestamos lista) {
    for(int i=0; i<MAX_CELDAS; i++) {
        lista[i].ocupada = false;
    }
}


bool alta(ListaPrestamos lista, FichaPrestamo ficha) {
    bool result = false;
    for(int i=0; i<MAX_CELDAS; i++) {
        if(lista[i].ocupada == false) {
            lista[i].prestamo = ficha;
            lista[i].ocupada = true;
            result = true;
            break;
        }
    }
    return result;
}

int buscar(ListaPrestamos lista, char* titulo) {
    int result = -1;
    for(int i=0; i<MAX_CELDAS; i++) {
        if(lista[i].ocupada == true) {
            if(strcmp(titulo, lista[i].prestamo.libro.titulo) == 0) {
                result = i;
                break;
            }
        }
    }
    return result;
}

bool devolver(ListaPrestamos lista, char* titulo) {
    int result = false;
    int indice = buscar(lista, titulo);
    if(indice !=-1) {
        lista[indice].ocupada = false;
        result = true;
    }
    return result;
}

void listar(ListaPrestamos lista) {
    for(int i=0; i<MAX_CELDAS; i++) {
        if(lista[i].ocupada == true) {
            printf("Título : %s\n", lista[i].prestamo.libro.titulo);
            printf("Autor  : %s\n", lista[i].prestamo.libro.autor);
            printf("Tomador: %s\n", lista[i].prestamo.tomador);
            printf("Fecha  : %s\n", lista[i].prestamo.fecha);
            printf("\n");
        }
    }
}