// Ejercicio 4.1.Par o impar
#include <stdio.h>

int main() {
   int n;
   printf("Teclee un número entero: ");
   scanf("%d", &n);
   if (n % 2 == 0) {
      printf("PAR\n");
   } else {
      printf("IMPAR\n");
   }
   printf("FIN\n");
   return 0;
}
