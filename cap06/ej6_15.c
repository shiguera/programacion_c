// Ejercicio 6.15. Módulo de un vector.
#include <stdio.h>
#include <math.h>

int main() {
   double x[] = {-2., 3., 5.};

   double s = 0.0;
   for (int i = 0; i < 3; i++) {
      s += x[i] * x[i];
   }
   double modulo = sqrt(s);

   printf("Módulo= %.2f\n", modulo);
   return 0;
}
