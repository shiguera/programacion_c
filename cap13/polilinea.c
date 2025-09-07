#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX_VERTICES 100

typedef struct {
   double x, y;
} Punto;
   
typedef struct {
   Punto vertices[MAX_VERTICES];
   int num_vertices;
} PoliLinea;

bool anadir_vertice(PoliLinea* plinea, Punto nuevo_vertice);
double longitud(PoliLinea plinea);
void mostrar(PoliLinea plinea);
void eliminar(PoliLinea* plinea, int index);
void simplificar(PoliLinea* plinea, int index);
PoliLinea simplificar_cow(PoliLinea* plinea, int index);
void anadir_puntos(PoliLinea* plinea, Punto* puntos, int num_puntos);
PoliLinea unir(PoliLinea plinea1, PoliLinea plinea2 );
bool es_cerrada(PoliLinea plinea);
PoliLinea cerrar(PoliLinea plinea);


int main() {
    PoliLinea plinea = {0};
    anadir_vertice(&plinea, (Punto){0.0, 0.0});
    anadir_vertice(&plinea, (Punto){1.0, 1.0});
    anadir_vertice(&plinea, (Punto){1.0, 2.0});
    anadir_vertice(&plinea, (Punto){2.0, 4.0});
    
    mostrar(plinea);
    // eliminar(&plinea, 2); // Puedes probar la función eliminar
    simplificar(&plinea, 2);
    mostrar(plinea);

    // Ej. 7
    Punto puntos[3] = { {1.0, 2.0}, {2.5, 3.6}, {-1.2, 3.14}};
    anadir_puntos(&plinea, puntos, 3);

    // Ej 8
    PoliLinea plinea2 = {0};
    anadir_vertice(&plinea, (Punto){3.0, -2.0});
    anadir_vertice(&plinea, (Punto){1.5, 4.0});
    anadir_vertice(&plinea, (Punto){6.0, -3.0});
    PoliLinea linresult = unir(plinea, plinea2);
    mostrar(linresult);

    // Ej. 9
    PoliLinea linresult_cow = simplificar_cow(&linresult, linresult.num_vertices-1);
    mostrar(linresult_cow);

    // Ej. 10 y 11
    printf("No debe ser cerrada: %s\n", es_cerrada(plinea2)? "SI": "NO");
    PoliLinea lincerrada = cerrar(plinea2);
    printf("Sí debe ser cerrada: %s\n", es_cerrada(lincerrada)? "SI": "NO");

    return 0;
}

bool anadir_vertice(PoliLinea* plinea, Punto nuevo_vertice) {
    int result = false;
    if(plinea->num_vertices < MAX_VERTICES) {
        int indice = plinea->num_vertices;
        plinea->vertices[indice] = nuevo_vertice;
        plinea->num_vertices++;
        result = true; 
    }
    return result;
}
double longitud(PoliLinea plinea) {
    double longitud = 0.0;
    for(int i=0; i<plinea.num_vertices-1; i++) {
        Punto inicio = plinea.vertices[i];
        Punto fin = plinea.vertices[i+1];
        double difx = fin.x - inicio.x;
        double dify = fin.y - inicio.y;
        double d = sqrt(difx*difx + dify*dify);
        longitud += d;
    }
    return longitud;
}
void mostrar(PoliLinea plinea) {
    int n = plinea.num_vertices;
    double L = longitud(plinea);
    printf("Num. Vértices: %d Longitud: %.2f\n", n, L);
    for(int i=0; i< plinea.num_vertices; i++) {
        Punto v = plinea.vertices[i];
        printf("(%.2f, %.2f) ", v.x, v.y);
    }
    printf("\n");
}
void eliminar(PoliLinea* plinea, int index) {
    int ultimo = plinea->num_vertices-1;
    plinea->vertices[index] = plinea->vertices[ultimo];
    plinea->num_vertices += -1;
}
void simplificar(PoliLinea* plinea, int index) {
    int ultimo = plinea->num_vertices-1;
    int elementos_a_desplazar = ultimo - index;
    for(int i=0; i<elementos_a_desplazar; i++) {
        plinea->vertices[index+i] = plinea->vertices[index+i+1];
    }
    plinea->num_vertices += -1;
}

PoliLinea simplificar_cow(PoliLinea* plinea, int index) {
    PoliLinea linresult = {0};
    for(int i=0; i<index; i++) {
        anadir_vertice(&linresult, plinea->vertices[i]);
    }
    if((index+1) < plinea->num_vertices) {
        for(int i=index+1; i<plinea->num_vertices; i++) {
            anadir_vertice(&linresult, plinea->vertices[i]);
        }   
    }
    return linresult;
}

void anadir_puntos(PoliLinea* plinea, Punto* puntos, int num_puntos) {
    for(int i=0; i<num_puntos; i++) {
        anadir_vertice(plinea, puntos[i]);
    }
}

PoliLinea unir(PoliLinea plinea1, PoliLinea plinea2 ) {
    PoliLinea linresult ={0};
    for(int i=0; i<plinea1.num_vertices; i++) {
        anadir_vertice(&linresult, plinea1.vertices[i]);
    }
    for(int i=0; i<plinea2.num_vertices; i++) {
        anadir_vertice(&linresult, plinea2.vertices[i]);
    }
    return linresult;
}

bool es_cerrada(PoliLinea plinea) {
    bool result = false;
    Punto p0 = plinea.vertices[0];
    Punto pult = plinea.vertices[plinea.num_vertices-1];
    if( (p0.x==pult.x) && (p0.y==pult.y)) {
        result = true;
    }
    return result;
}

PoliLinea cerrar(PoliLinea plinea) {
    PoliLinea linresult = plinea;
    anadir_vertice(&linresult, plinea.vertices[plinea.num_vertices-1]);
    return linresult;
}
