// Ejercicio 11.5. Recorrer una cadena con char* hasta '\textbackslash 0'
#include <stdio.h>

int main(void) {
   char s[] = "Hola";
   char* pc = s;
   while (*pc != '\0') {
      putchar(*pc);
      pc++;
   }
   putchar('\n');
   return 0;
}
