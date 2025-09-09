// Ejercicio 15.1. Crear fichero de números.
#include <stdio.h>

int main() {
   FILE* f = fopen("numeros.txt", "w");
   if (f == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }
   for (int i = 1; i <= 10; i++) {
      fprintf(f, "%d\n", i);
   }
   fclose(f);
   return 0;
}