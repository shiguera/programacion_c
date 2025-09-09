// Ejercicio 15.14. Leer fichero carácter a carácter.
#include <stdio.h>

int main() {
   FILE* f = fopen("mensaje.txt", "r");
   if (f == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }
   int c;
   while ((c = fgetc(f)) != EOF) {
      printf("Carácter: %c (código: %d)\n", c, c);
   }
   fclose(f);
   return 0;
}
