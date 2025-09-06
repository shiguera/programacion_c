// Ejercicio 5.7. Números primos en un intervalo.
#include <stdio.h>

int es_primo(int n) {
   if (n < 2) return 0;
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) return 0;
   }
   return 1;
}

int main() {
   int a, b;
   printf("Introduce dos números enteros (a < b): ");
   scanf("%d %d", &a, &b);

   for (int i = a; i <= b; i++) {
      if (es_primo(i)) {
         printf("%d ", i);
      }
   }
   printf("\n");
}
