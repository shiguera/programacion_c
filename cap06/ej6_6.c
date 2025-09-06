// Ejercicio 6.6. Máximo y mínimo de un array.
#include <stdio.h>

int main() {
   double valores[7] = {3.5, -1.2, 7.8, 0.0, 4.4, -3.3, 5.5};
   double maximo = valores[0];
   double minimo = valores[0];

   for (int i = 1; i < 7; i++) {
      if (valores[i] > maximo) {
         maximo = valores[i];
      }
      if (valores[i] < minimo) {
         minimo = valores[i];
      }
   }

   printf("Máximo = %.2f\n", maximo);
   printf("Mínimo = %.2f\n", minimo);

   return 0;
}
