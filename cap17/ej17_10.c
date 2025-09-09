// Ejercicio 17.10 Suma y módulo de complejos (<complex.h>)
#include <complex.h>
#include <math.h>
#include <stdio.h>

int main(void) {
   double complex z1 = 1.0 + 2.0 * I;
   double complex z2 = 3.0 - 4.0 * I;
   double complex s = z1 + z2;

   printf("z1 = %.2f%+.2fi\n", creal(z1), cimag(z1));
   printf("z2 = %.2f%+.2fi\n", creal(z2), cimag(z2));
   printf("s  = %.2f%+.2fi\n", creal(s), cimag(s));
   printf("|z1| = %.2f\n", cabs(z1));
   return 0;
}
