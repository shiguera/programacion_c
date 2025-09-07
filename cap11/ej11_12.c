// Ejercicio 11.12. Devolver puntero al máximo
#include <stdio.h>

int* puntero_al_maximo(int* a, int n) {
   if (a == NULL || n <= 0) return NULL;
   int* maxp = a;
   for (int* p = a + 1; p < a + n; p++) {
      if (*p > *maxp) maxp = p;
   }
   return maxp;
}

int main(void) {
   int v[6] = {5, 99, 12, 7, 42, 8};
   
   int* pm = puntero_al_maximo(v, 6);
   if (pm != NULL) {
      *pm = 0;  // modifica el elemento máximo
   }

   // Muestra array modificado
   for (int i = 0; i < 6; i++) {
    printf("%d ", v[i]);
   }
   printf("\n");
   return 0;
}
