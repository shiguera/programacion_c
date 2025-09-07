// Ejercicio 4.2. Positivo o negativo.
#include <stdio.h>

int main() {
   int numero;
   printf("Introduce un número: ");
   scanf("%d", &numero);
   if (numero > 0) {
      printf("El número es positivo\n");
   } else if (numero < 0) {
      printf("El número es negativo\n");
   } else {
      printf("El número es cero\n");
   }
   return 0;
}
