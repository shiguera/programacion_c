// Ejercicio 6.12. Máximo de una matriz y posición que ocupa.
#include <stdio.h>

int main() {
   double matriz[3][3] = {{1.2, 3.4, 5.6}, {7.8, 9.0, 2.1}, {4.3, 6.5, 8.7}};

   double maximo = matriz[0][0];
   int fila = 0, columna = 0;
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         if (matriz[i][j] > maximo) {
            maximo = matriz[i][j];
            fila = i;
            columna = j;
         }
      }
   }
   printf("Máximo = %.2f en fila %d, columna %d\n", maximo, fila, columna);
   return 0;
}
