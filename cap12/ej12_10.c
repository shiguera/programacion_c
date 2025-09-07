// Ejercicio 12.10. Tokenización de una frase.
#include <stdio.h>
#include <string.h>

int main() {
   char frase[200];

   printf("Introduce una frase: ");
   fgets(frase, sizeof(frase), stdin);

   // Eliminar el salto de línea final
   frase[strcspn(frase, "\n")] = '\0';

   char* palabra = strtok(frase, " ");

   while (palabra != NULL) {
      printf("Palabra: %s\n", palabra);
      palabra = strtok(NULL, " ");
   }

   return 0;
}
