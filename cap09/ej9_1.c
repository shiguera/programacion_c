// Ejercicio 9.1. Definición e impresión simple.
#include <stdio.h>

struct Punto2D {
   double x;
   double y;
};

int main() {
   struct Punto2D p = {3.5, -2.0};
   printf("Punto: (%.2f, %.2f)\n", p.x, p.y);
   return 0;
}