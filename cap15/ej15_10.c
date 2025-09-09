// Ejercicio 15.10. Actualización en fichero binario.
#include <stdio.h>

int main() {
   FILE *f = fopen("valores.bin", "rb+");
   if (f == NULL) {
      perror("valores.bin");
      return 1;
   }

   // Posicionarse en el tercer entero (índice 2)
   if (fseek(f, 2 * sizeof(int), SEEK_SET) != 0) {
      perror("Error al posicionar el archivo");
      fclose(f);
      return 1;
   }

   int nuevo_valor = 999;
   size_t escritos = fwrite(&nuevo_valor, sizeof(int), 1, f);
   if (escritos != 1) {
      perror("Error al escribir en el archivo");
      fclose(f);
      return 1;
   }

   fclose(f);
   printf("El tercer entero se ha modificado correctamente a %d.\n",
          nuevo_valor);
   return 0;
}
