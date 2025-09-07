// Ejercicio 12.1. Longitud de una palabra.
#include <stdio.h>
#include <string.h>

int main() {
   char palabra[100];

   printf("Introduce una palabra: ");
   scanf("%s", palabra);
   printf("Longitud: %lu\n", strlen(palabra));
   return 0;
}
