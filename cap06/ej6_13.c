// Ejercicio 6.13.  Cálculo de la media de los elementos de un array.
#include <stdio.h>

int main() {
   double x[] = {1.0, 0.0, 3.5, 4.3, -2.3, 6.3, 7.0};
   double suma = 0;

   for (int i = 0; i < 7; i++) {
      suma += x[i];
   }
   double media = suma / 7.0;
   printf("Media= %.2f\n", media);
   return 0;
}
