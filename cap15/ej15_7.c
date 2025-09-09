// Ejercicio 15.7. Lectura binaria con comprobación.
#include <stdio.h>

#define MAX_VALORES 100

int main() {
   int valores[MAX_VALORES];
   FILE *f = fopen("valores.bin", "rb");
   if (!f) {
      perror("valores.bin");
      return 1;
   }

   size_t cantidad = fread(valores, sizeof(int), MAX_VALORES, f);
   fclose(f);

   printf("El archivo contiene %zu valores:\n", cantidad);
   for (size_t i = 0; i < cantidad; ++i) {
      printf("%d\n", valores[i]);
   }
   return 0;
}
