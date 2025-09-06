// Ejercicio 5.14. Sustituir el break.
#include <stdio.h>

int main() {
   int n;
   printf("n = ");
   scanf("%d", &n);

   n = n + 1;
   while (n % 5 != 0) {
      n = n + 1;
   }

   printf("%d\n", n);

   return 0;
}