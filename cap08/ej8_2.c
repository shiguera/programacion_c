// Ejercicio 8.2. Contar vocales.
#include <stdio.h>

int es_vocal(char c) {
   c = (c >= 'A' && c <= 'Z') ? c + 32 : c;  // convertir a minúscula
   return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
   char palabra[100];
   int contador = 0;

   printf("Palabra: ");
   scanf("%s", palabra);

   for (int i = 0; palabra[i] != '\0'; i++) {
      if (es_vocal(palabra[i])) {
         contador++;
      }
   }

   printf("Número de vocales: %d\n", contador);
   return 0;
}
