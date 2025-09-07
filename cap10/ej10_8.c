// Ejercicio 10.8. Uniones etiquetadas.
#include <stdio.h>

// Enum para identificar el tipo de valor
enum Tipo { ENTERO, REAL };

// Estructura que combina enum y union
struct Campo {
   enum Tipo tipo;
   union {
      int entero;
      float real;
   } valor;
};

int main(void) {
   FILE* f = fopen("datos.bin", "rb");
   struct Campo c;

   // Leemos tipo y valor mientras haya datos
   while (fread(&c.tipo, sizeof(enum Tipo), 1, f) == 1) {
      if (c.tipo == ENTERO) {
         fread(&c.valor.entero, sizeof(int), 1, f);
         printf("Entero: %d\n", c.valor.entero);
      } else {
         fread(&c.valor.real, sizeof(float), 1, f);
         printf("Real: %.2f\n", c.valor.real);
      }
   }
   fclose(f);
   return 0;
}
