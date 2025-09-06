// Ejercicio 5.11. Conversión de decimal a binario.
#include <stdio.h>

int main() {
   int n;
   int binario[32];  // suficiente para representar enteros de 32 bits
   int i = 0;

   printf("Introduce un número entero positivo: ");
   scanf("%d", &n);

   if (n == 0) {
      printf("0\n");
   } else {
      while (n > 0) {
         binario[i] = n % 2;
         n = n / 2;
         i++;
      }
      printf("Representación binaria: ");
      for (int j = i - 1; j >= 0; j--) {
         printf("%d", binario[j]);
      }
      printf("\n");
   }
}
