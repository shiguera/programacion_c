// Ejercicio 11.14. Recorrer array y filtrar
#include <stdio.h>

struct Persona {
   const char* nombre;
   int edad;
};

int main(void) {
   struct Persona g[4] = {
       {"Ana", 17}, {"Luis", 18}, {"Marta", 22}, {"Paco", 15}};
   struct Persona* p = g;
   struct Persona* fin = g + 4;
   for (; p < fin; p++) {
      if (p->edad >= 18) {
         printf("%s (%d)\n", p->nombre, p->edad);
      }
   }
   return 0;
}