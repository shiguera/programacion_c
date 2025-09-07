// Ejercicio 4.7. Clasificación de notas
#include <stdio.h>

int main() {
   int nota;
   printf("Introduce tu nota (0 a 10): ");
   scanf("%d", &nota);

   if (nota >= 9) {
      printf("Sobresaliente\n");
   } else if (nota >= 7) {
      printf("Notable\n");
   } else if (nota >= 5) {
      printf("Aprobado\n");
   } else {
      printf("Suspenso\n");
   }

   return 0;
}