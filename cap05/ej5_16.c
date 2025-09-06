// Ejercicio 5.16. Evitar return dentro del bucle.
#include <stdio.h>

int main() {
   int n;
   int suma = 0;

   do {
      printf("n = ");
      scanf("%d", &n);
      suma += n;
   } while (n != 0);

   printf("s = %d\n", suma);
   return 0;
}
