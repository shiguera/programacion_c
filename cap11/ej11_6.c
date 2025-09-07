// Ejercicio 11.6. Función que suma un entero
#include <stdio.h>

void suma(int* p, int inc) {
   if (p != NULL) {
      *p += inc;
   }
}

int main(void) {
   int x = 7;
   suma(&x, 5);
   printf("x = %d\n", x);  // 12
   return 0;
}
