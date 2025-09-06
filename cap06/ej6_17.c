// Ejercicio 6.17. Traspuesta de una matriz.
// Explicación: la matriz A original es 2 x 3. 
// Se declara la matriz A^T de dimensión 3 x 2. 
// Para rellenarla, observa la trasposición de índices 
// que se hace en los bucles anidados. 
// En la salida, observa el formato de los números: 
// 1 decimal con ancho de campo 4.

#include <stdio.h>

int main() {
   double A[][3] = {{1.0, 3.0, -1.5}, {2.3, 3.2, 0.0}};

   double AT[3][2] = {};

   int filas = 2;
   int columnas = 3;
   for (int i = 0; i < columnas; i++) {
      for (int j = 0; j < filas; j++) {
         AT[i][j] = A[j][i];
      }
   }

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
         printf("%4.1f ", AT[i][j]);
      }
      printf("\n");
   }
   return 0;
}