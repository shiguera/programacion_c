// Ejercicio 5.6. Búsqueda con break.
#include <stdio.h>

int main() {
   int array[10] = {3, 8, 15, 22, 5, 19, 7, 1, 13, 10};
   int n, encontrado = 0;
   printf("Introduce un número: ");
   scanf("%d", &n);

   for (int i = 0; i < 10; i++) {
      if (array[i] == n) {
         encontrado = 1;
         break;
      }
   }

   if (encontrado) {
      printf("El número está en el array.\n");
   } else {
      printf("El número no se encuentra.\n");
   }
}

