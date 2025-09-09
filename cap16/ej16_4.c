// Ejercicio 16.4. Array de cadenas dinámicas.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 100  // Tamaño máximo por palabra

int main() {
   int n;
   printf("¿Cuántas palabras vas a introducir? ");
   scanf("%d", &n);
   getchar();  // Limpiar salto de línea del búfer

   char** palabras = (char**)malloc(n * sizeof(char*));
   if (palabras == NULL) {
      printf("Error al reservar memoria para el array de punteros.\n");
      return 1;
   }
   for (int i = 0; i < n; i++) {
      char buffer[TAM_MAX];
      printf("Palabra %d: ", i + 1);
      fgets(buffer, TAM_MAX, stdin);

      // Eliminar el salto de línea si está presente
      size_t len = strlen(buffer);
      if (buffer[len - 1] == '\n') {
         buffer[len - 1] = '\0';
      }
      // Reservar memoria exacta para la palabra
      palabras[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
      if (palabras[i] == NULL) {
         printf("Error al reservar memoria para la palabra %d.\n", i + 1);
         // Liberar memoria ya reservada antes de salir
         for (int j = 0; j < i; j++) {
            free(palabras[j]);
         }
         free(palabras);
         return 1;
      }
      strcpy(palabras[i], buffer);
   }
   // Mostrar las palabras almacenadas
   printf("\nPalabras introducidas:\n");
   for (int i = 0; i < n; i++) {
      printf("- %s\n", palabras[i]);
      free(palabras[i]);  // Liberamos cada cadena
   }
   free(palabras);  // Liberamos el array de punteros
   return 0;
}