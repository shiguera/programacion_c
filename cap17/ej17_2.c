// Ejercicio 17.2 Convertir cadena a mayúsculas (<ctype.h>)
#include <ctype.h>
#include <stdio.h>

int main(void) {
   char s[200];
   printf("Introduce una cadena: ");
   if (!fgets(s, sizeof s, stdin)) return 1;

   for (int i = 0; s[i] != '\0'; ++i) {
      s[i] = (char)toupper((unsigned char)s[i]);
   }
   printf("Mayúsculas: %s", s);
   return 0;
}
