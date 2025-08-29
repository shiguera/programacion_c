// Ejercicio 1.5. Variables int y operadores
#include <stdio.h>

int main(void) {
   int n;
   printf("Introduce un número entero: ");
   scanf("%d", &n);
   printf("%d\n", n % 2 == 0);
   return 0;
}