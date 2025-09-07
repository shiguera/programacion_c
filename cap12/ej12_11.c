// Ejercicio 12.11. Reemplazar todas las letras 'a' por 'x'.
#include <stdio.h>
#include <string.h>

int main() {
   char texto[100];

   printf("Introduce una cadena: ");
   scanf("%s", texto);

   for (int i = 0; texto[i] != '\0'; i++) {
      if (texto[i] == 'a') {
         texto[i] = 'x';
      }
   }

   printf("Cadena modificada: %s\n", texto);
   return 0;
}
