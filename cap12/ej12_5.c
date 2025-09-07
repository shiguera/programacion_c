// Ejercicio 12.5. Copia segura con límite.
#include <stdio.h>
#include <string.h>

int main() {
   char origen[100];
   char destino[10];

   printf("Introduce una cadena: ");
   scanf("%s", origen);

   strncpy(destino, origen, sizeof(destino) - 1);
   destino[sizeof(destino) - 1] = '\0';  // Asegurar el carácter nulo

   printf("Destino: %s\n", destino);
   return 0;
}
