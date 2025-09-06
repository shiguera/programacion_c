// Ejercicio 6.5. Producto de los elementos de un array.
#include <stdio.h>

int main() {
   int numeros[5] = {1, 3, 5, 7, 9};
   int producto = 1;

   for (int i = 0; i < 5; i++) {
      producto *= numeros[i];
   }

   printf("Producto total: %d\n", producto);

   return 0;
}
