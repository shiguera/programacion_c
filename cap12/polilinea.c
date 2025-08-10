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

int main() {
    PoliLinea plinea = {0};
    anadir_vertice(&plinea, (Punto){0.0, 0.0});
    anadir_vertice(&plinea, (Punto){1.0, 1.0});
    anadir_vertice(&plinea, (Punto){1.0, 2.0});
    anadir_vertice(&plinea, (Punto){2.0, 4.0});
    
    mostrar(plinea);
    // eliminar(&plinea, 2); // Puedes probar la función eliminar
    eliminar(&plinea, 2);
    mostrar(plinea);
    
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