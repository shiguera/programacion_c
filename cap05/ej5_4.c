// Ejercicio 5.4. Tabla de multiplicar.
#include <stdio.h>

int main() {
   int n;
   printf("Introduce un número entre 1 y 10: ");
   scanf("%d", &n);

   for (int i = 1; i <= 10; i++) {
      printf("%d x %d = %d\n", n, i, n * i);
   }
}

