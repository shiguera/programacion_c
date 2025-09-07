// Ejercicio 10.7. Uso de union}.
#include <stdio.h>

enum Tipo { ENTERO, REAL, CARACTER };

// Struct que combina un enum y una union (unión etiquetada)
struct Dato {
   enum Tipo tipo;
   union {
      int entero;
      float real;
      char caracter;
   } valor;
};
int main(void) {
   struct Dato d;
   d.tipo = REAL;
   d.valor.real = 5.75f;

   if (d.tipo == ENTERO)
      printf("%d\n", d.valor.entero);
   else if (d.tipo == REAL)
      printf("%.2f\n", d.valor.real);
   else
      printf("%c\n", d.valor.caracter);

   return 0;
}