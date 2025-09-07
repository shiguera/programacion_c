// Ejercicio 9.7. Estructuras como parámetros.
#include <stdio.h>
#include <string.h>

typedef struct {
   int id;
   char nombre[50];
   double precio;
} Producto;

void imprimir_producto(Producto p) {
   printf("ID: %d\nNombre: %s\nPrecio: %.2f\n", p.id, p.nombre, p.precio);
   strcpy(p.nombre, "CAMBIADO");  // No afecta al original
}

int main() {
   Producto prod = {1, "Ratón óptico", 15.90};
   imprimir_producto(prod);
   printf("Nombre en main: %s\n", prod.nombre);  // No cambia
   return 0;
}