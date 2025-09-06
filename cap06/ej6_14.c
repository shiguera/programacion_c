// Ejercicio 6.1.14 Producto escalar.
#include <stdio.h>

int main() {
   int U[] = {2, 4, 6, 8}, W[] = {-1, 3, 7, -5};

   int p = 0;
   for (int i = 0; i < 4; i++) {
      p += U[i] * W[i];
   }
   printf("Prod. escalar= %.d\n", p);
   return 0;
}
