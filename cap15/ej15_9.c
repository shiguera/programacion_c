// Ejercicio 15.9. Uso de ftell() y fseek().
#include <stdio.h>

#define MAX_LINEA 256

int main() {
   FILE *f = fopen("archivo.txt", "r");
   if (f == NULL) {
      perror("archivo.txt");
      return 1;
   }

   char buffer[11];  // 10 chars + \0
   if (fread(buffer, sizeof(char), 10, f) != 10) {
      printf("No se pudieron leer 10 caracteres.\n");
      fclose(f);
      return 1;
   }
   buffer[10] = '\0';  // Añadir fin de cadena
   printf("Primeros 10 caracteres: \"%s\"\n", buffer);

   // Volver al inicio del fichero
   fseek(f, 0, SEEK_SET);

   char linea[MAX_LINEA];
   if (fgets(linea, MAX_LINEA, f) != NULL) {
      printf("Primera línea completa: %s", linea);
   } else {
      printf("Error leyendo la primera línea\n");
   }

   fclose(f);
   return 0;
}
