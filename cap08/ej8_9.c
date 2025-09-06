// Ejercicio 8.9. Detectar palíndromos.
#include <stdio.h>

int es_palindromo(char* s);

int main() {
   char palabra[100];
   printf("Introduce una palabra: ");
   scanf("%s", palabra);

   if (es_palindromo(palabra)) {
      printf("Es un palíndromo.\n");
   } else {
      printf("No es un palíndromo.\n");
   }
   return 0;
}

int es_palindromo(char* s) {
   int i = 0, j;

   while (s[i] != '\0') {
      i++;
   }
   j = i - 1;
   i = 0;

   while (i < j) {
      if (s[i] != s[j]) {
         return 0;
      }
      i++;
      j--;
   }
   return 1;
}
