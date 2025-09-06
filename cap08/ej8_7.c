// Ejercicio 8.7. Convertir a minúsculas
#include <stdio.h>

void convertir_minusculas(char s[]) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }
}

int main() {
   char palabra[40];
   printf("Introduce una palabra: ");
   scanf("%s", palabra);

   convertir_minusculas(palabra);

   printf("%s\n", palabra);
   return 0;
}
