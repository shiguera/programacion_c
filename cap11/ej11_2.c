// Ejercicio 11.2. Puntero a int e impresión vía puntero
#include <stdio.h>

int main(void) {
   int x = 10;
   int* p = &x;

   printf("Valor de x a traves de p: %d\n", *p);

   return 0;
}
