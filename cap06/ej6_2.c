// Ejercicio 6.2. Asignación individual a los elementos de un array.
#include <stdio.h>

int main() {
   double x[4];

   x[0] = 3.14;
   x[1] = -2.71;
   x[2] = 0.0;
   x[3] = 9.81;

   for (int i = 0; i < 4; i++) {
      printf("x[%d] = %.2f\n", i, x[i]);
   }

   return 0;
}
