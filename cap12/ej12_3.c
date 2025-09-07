// Ejercicio 12.3. Comparación simple.
#include <stdio.h>
#include <string.h>

int main() {
   char cad1[100], cad2[100];

   printf("Introduce la primera palabra: ");
   scanf("%s", cad1);

   printf("Introduce la segunda palabra: ");
   scanf("%s", cad2);

   if (strcmp(cad1, cad2) == 0) {
      printf("Las palabras son iguales.\n");
   } else {
      printf("Las palabras son diferentes.\n");
   }

   return 0;
}
