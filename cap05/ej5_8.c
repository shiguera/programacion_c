// Ejercicio 5.8. Menú interactivo con bucle infinito.
#include <stdio.h>

int main() {
   int opcion, a, b;
   while (1) {
      printf("1. Sumar\n");
      printf("2. Restar\n");
      printf("3. Salir\n");
      printf("Opción: ");
      scanf("%d", &opcion);

      if (opcion == 1) {
         printf("Introduce dos números: ");
         scanf("%d %d", &a, &b);
         printf("Resultado: %d\n", a + b);
      } else if (opcion == 2) {
         printf("Introduce dos números: ");
         scanf("%d %d", &a, &b);
         printf("Resultado: %d\n", a - b);
      } else if (opcion == 3) {
         break;
      } else {
         printf("Opción no válida.\n");
      }
   }
}
