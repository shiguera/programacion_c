// Ejercicio 10.1. Uso de enum}.
#include <stdio.h>

enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

int main(void) {
   for (int i = LUNES; i <= DOMINGO; i++) {
      printf("%d\n", i);  // Mostramos el valor entero asociado
   }

   return 0;
}
