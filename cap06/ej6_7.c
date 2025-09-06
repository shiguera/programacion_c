// Ejercicio 6.7. Conteo de elementos negativos.
#include <stdio.h>

int main() {
   double valores[8] = {2.5, -3.1, 4.7, -0.5, 0.0, -2.2, 6.6, -1.0};
   int contador = 0;

   for (int i = 0; i < 8; i++) {
      if (valores[i] < 0) {
         contador++;
      }
   }
   printf("Hay %d elementos negativos.\n", contador);

   return 0;
}
