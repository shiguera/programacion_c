// Ejercicio 16.1. Primeros pasos con malloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   printf("¿Cuántos números deseas introducir? ");
   scanf("%d", &n);

   // Reservar memoria para n enteros
   int* numeros = (int*)malloc(n * sizeof(int));
   if (numeros == NULL) {
      printf("Error: no se pudo asignar memoria.\n");
      return 1;
   }
   // Leer los valores
   for (int i = 0; i < n; i++) {
      printf("Introduce el número %d: ", i + 1);
      scanf("%d", &numeros[i]);
   }
   // Calcular la suma
   int suma = 0;
   for (int i = 0; i < n; i++) {
      suma += numeros[i];
   }

   printf("La suma de los números es: %d\n", suma);
   // Liberar la memoria
   free(numeros);
   return 0;
}