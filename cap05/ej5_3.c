// Ejercicio 5.3.Validación entrada con \textit{do ... while}.
#include <stdio.h>

int main() {
   int n;
   
   do {
      printf("Introduce un número mayor que cero: ");
      scanf("%d", &n);
   } while (n <= 0);
   
   printf("Has introducido: %d\n", n);
}
