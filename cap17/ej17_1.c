// Ejercicio 17.1 Raíz cuadrada (<math.h>).
#include <math.h>
#include <stdio.h>

int main(void) {
   double x;
   printf("Introduce un número positivo: ");
   if (scanf("%lf", &x) != 1 || x < 0.0) {
      printf("Entrada no válida.\n");
      return 1;
   }
   printf("sqrt(%.6f) = %.6f\n", x, sqrt(x));
   return 0;
}
