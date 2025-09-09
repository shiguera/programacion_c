// Ejercicio 15.6. Leer estructuras de ficheros binarios.
#include <stdio.h>

typedef struct {
   double x, y;
} Punto;

int main() {
   FILE* f = fopen("puntos.bin", "rb");
   if (f == NULL) {
      printf("Error al abrir fichero\n");
      return 1;
   }

   Punto p;
   int n = 0;
   double sumx = 0, sumy = 0;
   while (fread(&p, sizeof(Punto), 1, f) == 1) {
      sumx += p.x;
      sumy += p.y;
      n++;
   }
   fclose(f);
   if (n > 0) {
      printf("Media: (%.2lf, %.2lf)\n", sumx / n, sumy / n);
   }
   return 0;
}
