// Ejercicio 11.11. Media aritmética de un array de double
#include <stdio.h>

double media(const double* a, int n) {
   if (a == NULL || n <= 0) return 0.0;
   double suma = 0.0;
   const double* p = a;
   const double* fin = a + n;
   for (; p < fin; p++) suma += *p;
   return suma / n;
}

int main(void) {
   double v[4] = {1.0, 2.0, 3.0, 4.0};
   printf("Media = %.2f\n", media(v, 4));
   return 0;
}
