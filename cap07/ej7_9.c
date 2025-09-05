// Ejercicio 7.9. Número de cifras (versión recursiva)
#include <stdio.h>

int num_cifras(int n);

int main() {
   int x;
   printf("Introduce un número positivo: ");
   scanf("%d", &x);
   printf("Número de cifras: %d\n", num_cifras(x));
   return 0;
}

int num_cifras(int n) {
   if (n < 10) {
      return 1;
   } else {
      return 1 + num_cifras(n / 10);
   }
}
