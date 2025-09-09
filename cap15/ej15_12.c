// Ejercicio 15.12. Escribir estructuras en ficheros binarios.
#include <stdio.h>

typedef struct {
   double x, y;
} Punto;

int main() {
   FILE* f = fopen("puntos.bin", "wb");
   if (f == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }
   for (int i = 1; i <= 10; i++) {
      Punto p = {i * 1.0, i * 2.0};
      fwrite(&p, sizeof(Punto), 1, f);
   }
   fclose(f);
   return 0;
}
