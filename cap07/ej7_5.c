// Ejercicio 7.5. Valor absoluto de un número entero  
#include <stdio.h>

int valor_absoluto(int n) {
   int result = n;
   if(n < 0) {
      result = -n;
   } 
   return result;
}

int main() {
   int x;
   printf("Introduce un número entero: ");
   scanf("%d", &x);
   printf("Valor absoluto: %d\n", valor_absoluto(x));
   return 0;
}

