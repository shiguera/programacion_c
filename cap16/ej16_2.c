// Ejercicio 16.2. Inicializar con calloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   printf("¿Cuántos números deseas introducir? ");
   scanf("%d", &n);
   // Reservar memoria con calloc (inicializa a cero)
   int* numeros = (int*)calloc(n, sizeof(int));
   if (numeros == NULL) {
      printf("Error: no se pudo asignar memoria.\n");
      return 1;
   }

   // Mostrar valores iniciales (deben ser 0)
   printf("Valores iniciales en el array:\n");
   for (int i = 0; i < n; i++) {
      printf("numeros[%d] = %d\n", i, numeros[i]);
   }

   // Leer los valores desde teclado
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

   free(numeros);
   return 0;
}
