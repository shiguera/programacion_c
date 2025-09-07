// Ejercicio 11.1. Valor y dirección de una variable
#include <stdio.h>

int main(void) {
   int x = 42;

   printf("Valor de x: %d\n", x);
   printf("Direccion de x: %p\n", (void*)&x);

   return 0;
}