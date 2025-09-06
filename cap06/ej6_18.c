// Ejercicio 6.18. Mínimo entre los positivos.
#include <stdio.h>

int main() {
   double datos[] = {-2.5, 0.0, 4.3, -1.1, 7.8, 2.0, -3.0};
   int n = sizeof(datos) / sizeof(datos[0]);

   double minimo = 0.0;
   int encontrado = 0;
   for (int i = 0; i < n; i++) {
      if (datos[i] > 0) {
         if (!encontrado || datos[i] < minimo) {
            minimo = datos[i];
            encontrado = 1;
         }
      }
   }
   if (encontrado) {
      printf("El menor valor positivo es: %.2f\n", minimo);
   } else {
      printf("No hay valores positivos en el array.\n");
   }
   return 0;
}
