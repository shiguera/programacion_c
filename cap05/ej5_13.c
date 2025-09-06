// Ejercicio 5.13. Cuenta descendente.
#include <stdio.h>

int main() {
   int n;
   printf("Introduce un número entero: ");
   scanf("%d", &n);

   printf("Con bucle for:\n");
   for (int i = n; i >= 0; i--) {
      printf("%d ", i);
   }

   printf("\n\nCon bucle while:\n");
   int i = n;
   while (i >= 0) {
      printf("%d ", i);
      i--;
   }

   printf("\n\nCon bucle do ... while:\n");
   i = n;
   do {
      printf("%d ", i);
      i--;
   } while (i >= 0);

   printf("\n");
}
