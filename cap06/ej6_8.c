// Ejercicio 6.8. Modificación condicional de un array.
#include <stdio.h>

int main() {
   int numeros[6] = {2, 3, 4, 5, 6, 7};

   for (int i = 0; i < 6; i++) {
      if (numeros[i] % 2 == 0) {
         numeros[i] = 0;
      }
   }

   for (int i = 0; i < 6; i++) {
      printf("%d ", numeros[i]);
   }
   printf("\n");

   return 0;
}
