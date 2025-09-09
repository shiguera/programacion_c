// Ejercicio 17.3 Contar letras y dígitos (<ctype.h>)
#include <ctype.h>
#include <stdio.h>

int main(void) {
   char s[200];
   int letras = 0, digitos = 0;
   printf("Introduce una cadena: ");
   if (!fgets(s, sizeof s, stdin)) return 1;
   for (int i = 0; s[i] != '\0'; ++i) {
      unsigned char c = (unsigned char)s[i];
      if (isalpha(c)) ++letras;
      if (isdigit(c)) ++digitos;
   }
   printf("Letras: %d, Dígitos: %d\n", letras, digitos);
   return 0;
}