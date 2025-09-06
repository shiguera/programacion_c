// Ejercicio 6.10. Suma de todos los elementos de una matriz.
#include <stdio.h>

int main() {
   double matriz[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};

   double suma = 0.0;

   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
         suma += matriz[i][j];
      }
   }

   printf("Suma total: %.2f\n", suma);
   return 0;
}
