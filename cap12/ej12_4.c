// Ejercicio 12.4. Buscar una letra.
#include <stdio.h>
#include <string.h>

int main() {
   char cadena[100];
   char c;

   printf("Introduce una cadena: ");
   scanf("%s", cadena);

   printf("Introduce un carácter: ");
   scanf(" %c", &c);  // Espacio antes de %c para ignorar el salto de línea

   char* pos = strchr(cadena, c);

   if (pos != NULL) {
      printf("El carácter '%c' aparece en la posición %ld.\n", c, pos - cadena);
   } else {
      printf("El carácter no se encontró.\n");
   }

   return 0;
}
