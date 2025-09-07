// Ejercicio 4.3. Par o impar (sin else).
#include <stdio.h>

int main() {
   int numero;
   printf("Introduce un número: ");
   scanf("%d", &numero);

   if (numero % 2 == 0) {
      printf("Es par\n");
   }
   return 0;
}
