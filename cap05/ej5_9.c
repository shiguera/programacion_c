// Ejercicio 5.9. Inversión de un número.
#include <stdio.h>

int main() {
   int n;
   printf("Introduce un número entero positivo: ");
   scanf("%d", &n);

   while (n > 0) {
      int digito = n % 10;
      printf("%d", digito);
      n /= 10;
   }
   printf("\n");
}
