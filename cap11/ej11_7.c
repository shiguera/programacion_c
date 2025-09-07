// Ejercicio 11.7. Duplicar con aritmética de punteros
#include <stdio.h>

void duplicar(int* a, int n) {
   if (a == NULL || n <= 0) {
      return;
   }
   for (int *p = a, *fin = a + n; p < fin; p++) {
      *p *= 2;
   }
}

int main(void) {
   int v[5] = {1, 2, 3, 4, 5};

   duplicar(v, 5);
   for (int i = 0; i < 5; i++) {
      printf("%d ", v[i]);
   }
   printf("\n");

   return 0;
}
