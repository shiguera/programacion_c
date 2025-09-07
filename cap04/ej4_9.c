// Ejercicio 4.9. Selección múltiple con rango
#include <stdio.h>

int main() {
   int mes;
   printf("Introduce un número de mes (1-12): ");
   scanf("%d", &mes);

   if (mes == 12 || mes == 1 || mes == 2) {
      printf("Invierno\n");
   } else if (mes >= 3 && mes <= 5) {
      printf("Primavera\n");
   } else if (mes >= 6 && mes <= 8) {
      printf("Verano\n");
   } else if (mes >= 9 && mes <= 11) {
      printf("Otoño\n");
   } else {
      printf("Mes no válido\n");
   }

   return 0;
}
