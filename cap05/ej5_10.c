// Ejercicio 5.11. Conversión de decimal a binario.
#include <stdio.h>

int main() {
   int n;
   printf("Introduce un número positivo: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
         printf("*");
      }
      printf("\n");
   }
}
