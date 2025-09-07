// Ejercicio 9.3. Copiar estructuras.
#include <stdio.h>

struct Fecha {
   int dia, mes, anio;
};

int main() {
   struct Fecha f1 = {7, 8, 2025};
   struct Fecha f2 = f1;

   printf("Fecha 1: %d/%d/%d\n", f1.dia, f1.mes, f1.anio);
   printf("Fecha 2: %d/%d/%d\n", f2.dia, f2.mes, f2.anio);
   return 0;
}