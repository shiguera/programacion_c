// Ejercicio 12.6. Comparar prefijos.
#include <stdio.h>
#include <string.h>

int main() {
   char s1[100], s2[100];
   int n;

   printf("Introduce la primera cadena: ");
   scanf("%s", s1);

   printf("Introduce la segunda cadena: ");
   scanf("%s", s2);

   printf("Número de caracteres a comparar: ");
   scanf("%d", &n);

   if (strncmp(s1, s2, n) == 0) {
      printf("Coinciden en los primeros %d caracteres.\n", n);
   } else {
      printf("No coinciden en los primeros %d caracteres.\n", n);
   }

   return 0;
}
