// Ejercicio 14.13. Contar líneas tecleadas.
#include <stdio.h>
#include <string.h>

int main() {
   char linea[256];
   int contador = 0;

   printf("Escribe varias líneas de texto (escribe FIN para terminar):\n");

   while (1) {
      if (fgets(linea, sizeof(linea), stdin) == NULL) {
         break;  // fin de entrada
      }
      // Eliminar el '\n' final si existe
      size_t len = strlen(linea);
      if (len > 0 && linea[len - 1] == '\n') {
         linea[len - 1] = '\0';
      }
      if (strcmp(linea, "FIN") == 0) {
         break;
      }
      contador++;
   }
   printf("Has introducido %d líneas.\n", contador);
   return 0;
}
