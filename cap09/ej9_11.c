// Ejercicio 9.11. Campos de bits.
#include <stdio.h>

struct Permisos {
   unsigned int lectura : 1;
   unsigned int escritura : 1;
   unsigned int ejecucion : 1;
};

int main() {
   struct Permisos p = {1, 0, 1};

   printf("Lectura: %s\n", p.lectura ? "Sí" : "No");
   printf("Escritura: %s\n", p.escritura ? "Sí" : "No");
   printf("Ejecución: %s\n", p.ejecucion ? "Sí" : "No");

   return 0;
}
