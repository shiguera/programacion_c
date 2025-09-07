// Ejercicio 11.13. Devolver por puntero elementos \textgreater{} 100
#include <stdio.h>

void cuenta_mayores100(const int* a, int n, int* contador) {
   if (a == NULL || n <= 0 || contador == NULL) {
    return;
   }
   int c = 0;
   for (int i=0; i<n; i++) {
      if (a[i] > 100) c++;
   }
   *contador = c;
}

int main(void) {
   int v[7] = {50, 101, 200, 3, 99, 100, 150};
   int c;
   cuenta_mayores100(v, 7, &c);
   printf("Mayores que 100: %d\n", c);
   return 0;
}
