// Ejercicio 5.2. Suma de números naturales.
#include <stdio.h>

int main() {
   int n, suma = 0;
   printf("Introduce un número positivo: ");
   scanf("%d", &n);

   int i = 1;
   while (i <= n) {
      suma += i;
      i++;
   }
   printf("La suma es: %d\n", suma);
}