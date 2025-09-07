// Ejercicio 10.5. Uso de union.
#include <stdio.h>

enum Combustible { GASOLINA, DIESEL, ELECTRICO };

int main(void) {
   enum Combustible c = DIESEL;  // Asignamos un valor

   if (c == GASOLINA) {
      printf("Gasolina\n");
   } else if (c == DIESEL) {
      printf("Diésel\n");
   } else {
      printf("Eléctrico\n");
   }
   return 0;
}
