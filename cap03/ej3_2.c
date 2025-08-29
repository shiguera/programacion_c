// Ejercicio 1.2. Variables double y operadores
#include <stdio.h>

int main(void) {
   double k = 7;
   double x = (-1.0 / 3) / (2 * k + 1);
   double a = 10 / (2 * x);
   double z = 2 + 7.0 / 4 * x + a;
   
   printf("k = %.2f\n", k);
   printf("x = %.2f\n", x);
   printf("a = %.2f\n", a);
   printf("z = %.2f\n", z);
   return 0;
}
