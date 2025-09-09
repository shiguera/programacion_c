// Ejercicio 15.11. Contar líneas de un fichero.
#include <stdio.h>

#define MAX_LINEA 256

int main() {
   char nombre_fichero[100];
   char linea[MAX_LINEA];
   int contador_lineas = 0;

   printf("Introduce el nombre del fichero de texto: ");
   if (scanf("%99s", nombre_fichero) != 1) {
      printf("Error al leer el nombre del fichero.\n");
      return 1;
   }

   FILE *f = fopen(nombre_fichero, "r");
   if (f == NULL) {
      perror("Error al abrir el fichero");
      return 1;
   }

   while (fgets(linea, MAX_LINEA, f)) {
      contador_lineas++;
   }

   fclose(f);

   printf("El fichero '%s' contiene %d líneas.\n", nombre_fichero,
          contador_lineas);
   return 0;
}
