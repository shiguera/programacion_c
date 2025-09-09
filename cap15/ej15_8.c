// Ejercicio 15.8. Copiar fichero línea a línea.
#include <stdio.h>

int main() {
   FILE* origen = fopen("original.txt", "r");
   FILE* destino = fopen("copia.txt", "w");
   if (origen == NULL || destino == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }
   char linea[256];
   while (fgets(linea, 256, origen)) {
      fputs(linea, destino);
   }

   fclose(origen);
   fclose(destino);
   return 0;
}
