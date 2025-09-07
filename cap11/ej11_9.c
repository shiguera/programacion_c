// Ejercicio 11.9. struct Punto y acceso con ->
#include <stdio.h>

struct Punto {
   double x;
   double y;
};

int main(void) {
   struct Punto p1 = {0.0, 0.0};
   struct Punto* pp = &p1;

   pp->x = 3.5;
   pp->y = -2.0;

   printf("Punto: (%.1f, %.1f)\n", p1.x, p1.y);

   return 0;
}
