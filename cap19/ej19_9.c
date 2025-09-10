// Ejercicio 19.9. Escritura en fichero en UTF-8.
#include <locale.h>
#include <stdio.h>

int main(void) {
   setlocale(LC_ALL, "");
   // setlocale(LC_ALL, ".UTF8"); // En Windows

   FILE* f = fopen("salida_utf8.txt", "w");
   if (!f) {
      perror("Error al abrir el fichero");
      return 1;
   }
   const char* frases[] = {"mañana\n", "año\n", "camión\n"};
   for (int i = 0; i < 3; i++) {
      fputs(frases[i], f);
   }
   fclose(f);
   printf("Fichero escrito correctamente.\n");
   return 0;
}
