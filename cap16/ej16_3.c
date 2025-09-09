// Ejercicio 16.3. Redimensionar un array.
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n, m;
   printf("¿Cuántos números deseas introducir inicialmente? ");
   scanf("%d", &n);

   int* numeros = (int*)malloc(n * sizeof(int));
   if (numeros == NULL) {
      printf("Error al reservar memoria.\n");
      return 1;
   }

   // Leer los primeros n números
   for (int i = 0; i < n; i++) {
      printf("Número %d: ", i + 1);
      scanf("%d", &numeros[i]);
   }
   char respuesta;
   printf("¿Deseas añadir más números? (s/n): ");
   scanf(" %c",
         &respuesta);  // Espacio antes del %c para consumir saltos de línea
   if (respuesta == 's' || respuesta == 'S') {
      printf("¿Cuántos más? ");
      scanf("%d", &m);

      int* temp = (int*)realloc(numeros, (n + m) * sizeof(int));
      if (temp == NULL) {
         printf("Error al redimensionar el array.\n");
         free(numeros);  // Liberamos el bloque original
         return 1;
      }
      numeros = temp;

      // Leer los nuevos valores
      for (int i = n; i < n + m; i++) {
         printf("Número %d: ", i + 1);
         scanf("%d", &numeros[i]);
      }

      n += m;  // Actualizamos el total de elementos
   }

   // Mostrar el contenido final
   printf("Contenido final del array:\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", numeros[i]);
   }
   printf("\n");

   free(numeros);
   return 0;
}
