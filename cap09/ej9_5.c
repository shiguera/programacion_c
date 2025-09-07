// Ejercicio 9.5. Uso de typedef.
#include <stdio.h>

typedef struct {
   double x;
   double y;
} Punto2D;

int main() {
   Punto2D p1 = {1.5, 2.5}, p2 = {-3.0, 0.0};
   printf("P1: (%.2f, %.2f)\n", p1.x, p1.y);
   printf("P2: (%.2f, %.2f)\n", p2.x, p2.y);
   return 0;
}