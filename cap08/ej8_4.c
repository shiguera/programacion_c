// Ejercicio 8.4. Comparación alfabética.
#include <stdio.h>

int main() {
   char cad1[100], cad2[100];
   printf("Cadena 1: ");
   scanf("%s", cad1);
   printf("Cadena 2: ");
   scanf("%s", cad2);

   char ch1 = cad1[0];
   char ch2 = cad2[0];

   if (ch1 == ch2) {
      printf("Empiezan igual\n");
   } else if (ch1 < ch2) {
      printf("cad1 va antes que cad2\n");
   } else {
      printf("cad2 va antes que cad1\n");
   }

   return 0;
}
