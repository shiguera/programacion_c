// Ejercicio 11.4. Recorrer un array con p++
#include <stdio.h>

int main(void) {
   int v[5] = {10, 20, 30, 40, 50};
   int* p = v;
   for (int i = 0; i < 5; i++) {
      printf("%d ", *p);
      p++;  // avanza al siguiente elemento
   }
   printf("\n");
   return 0;
}
