// Ejercicio 11.8. Intercambio de dos enteros con punteros
#include <stdio.h>

void swap(int* a, int* b) {
   if (a == NULL || b == NULL) return;
   int tmp = *a;
   *a = *b;
   *b = tmp;
}
int main(void) {
   int x = 3, y = 7;
   swap(&x, &y);
   printf("x=%d y=%d\n", x, y);  // x=7 y=3
   return 0;
}
