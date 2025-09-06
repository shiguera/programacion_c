// Ejercicio 6.16. Comparación de vectores.
#include <stdio.h>

int main() {
   int U[] = {-2, 3, 5, 8, 6};
   int W[] = {-1, 3, 7, 8, -1};

   int Q[5] = {};
   for (int i = 0; i < 5; i++) {
      Q[i] = (U[i] == W[i]);
   }

   for (int i = 0; i < 5; i++) {
      printf("%d ", Q[i]);
   }
   printf("\n");
   return 0;
}
