// Ejercicio 8.10. Comparar longitudes
#include <stdio.h>

int main() {
   char palabra_1[40], palabra_2[40];
   printf("Palabra 1: ");
   scanf("%s", palabra_1);
   printf("Palabra 2: ");
   scanf("%s", palabra_2);

   int longitud_1 = 0;
   while (palabra_1[longitud_1] != '\0') {
      longitud_1++;
   }

   int longitud_2 = 0;
   while (palabra_2[longitud_2] != '\0') {
      longitud_2++;
   }
   if (longitud_1 == longitud_2) {
      printf("Miden lo mismo\n");
   } else if (longitud_1 > longitud_2) {
      printf("%s es más larga que %s\n", palabra_1, palabra_2);
   } else {
      printf("%s es más corta que %s\n", palabra_1, palabra_2);
   }
   return 0;
}
