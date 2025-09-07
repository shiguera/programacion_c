// Ejercicio 12.12. Medir la longitud hasta una letra.
#include <stdio.h>
#include <string.h>

int main() {
   char texto[100];
   char c;

   printf("Introduce una cadena: ");
   scanf("%s", texto);

   printf("Introduce el carácter a buscar: ");
   scanf(" %c", &c);

   size_t pos = strcspn(texto, (char[]){c, '\0'});

   if (pos < strlen(texto)) {
      printf("La letra '%c' aparece tras %zu caracteres.\n", c, pos);
   } else {
      printf("El carácter no se encuentra en la cadena.\n");
   }

   return 0;
}
