// Ejercicio 15.3.- Escritura de estructuras
#include <stdio.h>

struct Producto {
    char nombre[21];
    int stock;
    double precio;
};

int main() {
    struct Producto productos[22] = {
        {"Manzanas",      50,  0.37},
        {"Leche",         30,  1.25},
        {"Pan integral",  20,  1.10},
        {"Queso fresco",  15,  2.60},
        {"Arroz",         80,  0.90}
    };

    FILE* f = fopen("productos.txt", "w");
    if (f == NULL) {
        perror("productos.txt");
        return 1;
    }

    // Encabezado
    fprintf(f, "%-30s %8s %10s\n", "NOMBRE", "STOCK", "PRECIO");
    fprintf(f, "%-30s %8s %10s\n", "------------------------------", "--------", "----------");

    // Contenido
    for(int i=0; i<5; ++i) {
        fprintf(f, "%-30s %8d %10.2f\n",
            productos[i].nombre, productos[i].stock, productos[i].precio);
    }

    fclose(f);
    return 0;
}
