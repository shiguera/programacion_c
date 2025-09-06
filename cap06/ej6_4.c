// Ejercicio 6.4. Cálculo de la suma de los elementos de un array.
#include <stdio.h>

int main() {
   int numeros[6] = {5, 10, 15, 20, 25, 30};
   int suma = 0;

   for (int i = 0; i < 6; i++) {
      suma += numeros[i];
   }

   printf("Suma total: %d\n", suma);

   return 0;
}
