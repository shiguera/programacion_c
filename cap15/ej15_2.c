// Ejercicio 15.2. Leer números y calcular suma.
#include <stdio.h>

int main() {
   FILE* f = fopen("numeros.txt", "r");
   if (f == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }
   int n, suma = 0;
   while (fscanf(f, "%d", &n) == 1) {
      suma += n;
   }
   fclose(f);
   printf("Suma: %d\n", suma);
   return 0;
}
