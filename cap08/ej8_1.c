// Ejercicio 8.1. Longitud manual.
#include <stdio.h>

int main() {
   char palabra[100];

   printf("Introduce una palabra: ");
   scanf("%s", palabra);

   int i = 0;
   while (palabra[i] != '\0') {
      i++;
   }

   printf("La longitud es: %d\n", i);
   return 0;
}
