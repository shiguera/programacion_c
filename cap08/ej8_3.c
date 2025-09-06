// Ejercicio 8.3. Invertir cadena.
#include <stdio.h>

int main() {
   char original[100], invertida[100];

   printf("Introduce una palabra: ");
   scanf("%s", original);

   int longitud = 0;
   while (original[longitud] != '\0') {
      longitud++;
   }

   for (int i = 0; i < longitud; i++) {
      invertida[i] = original[longitud - 1 - i];
   }
   invertida[longitud] = '\0';

   printf("Invertida: %s\n", invertida);
   return 0;
}
