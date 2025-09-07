// Ejercicio 4.6. Uso básico de switch
#include <stdio.h>

int main() {
   int dia;
   printf("Introduce un número (1-5): ");
   scanf("%d", &dia);

   switch (dia) {
      case 1:
         printf("Lunes\n");
         break;
      case 2:
         printf("Martes\n");
         break;
      case 3:
         printf("Miércoles\n");
         break;
      case 4:
         printf("Jueves\n");
         break;
      case 5:
         printf("Viernes\n");
         break;
      default:
         printf("Número no válido\n");
   }
   
   return 0;
}
