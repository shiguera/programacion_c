// Ejercicio 5.5. Números impares con \textit{continue}.
#include <stdio.h>

int main() {
   for (int i = 1; i <= 20; i++) {
      if (i % 2 == 0) {
         continue;
      }
      printf("%d\n", i);
   }
}
