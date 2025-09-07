// Ejercicio 11.3. Modificar el valor con puntero
#include <stdio.h>

int main(void) {
   int x = 10;
   int* p = &x;

   *p = 25;  // modifica x

   printf("Nuevo valor de x: %d\n", x);

   return 0;
}
