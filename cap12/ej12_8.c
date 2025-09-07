// Ejercicio 12.8. Detectar subcadenas prohibidas.
#include <stdio.h>
#include <string.h>

int main() {
   char frase[200];

   printf("Introduce una frase: ");
   getchar();  // Limpiar búfer
   fgets(frase, sizeof(frase), stdin);

   if (strstr(frase, "error") != NULL || strstr(frase, "peligro") != NULL ||
       strstr(frase, "prohibido") != NULL) {
      printf("Advertencia: la frase contiene palabras prohibidas.\n");
   } else {
      printf("Frase aceptada.\n");
   }

   return 0;
}
