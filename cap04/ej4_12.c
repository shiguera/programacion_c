// Ejercicio 4.12. Clasificación de clientes
#include <stdio.h>

int main() {
   int antiguedad, pais;
   double gasto;
   const char* categoria;

   printf("Antigüedad (años): ");
   scanf("%d", &antiguedad);
   printf("Gasto total (€): ");
   scanf("%lf", &gasto);
   printf("Código de país (1: España, 2: UE, 3: Resto): ");
   scanf("%d", &pais);

   // Clasificación del cliente
   if (antiguedad > 5 && gasto > 5000) {
      categoria = "VIP";
   } else if ((antiguedad >= 1 && antiguedad <= 5) || gasto > 1000) {
      categoria = "Regular";
   } else {
      categoria = "Nuevo";
   }
   printf("Categoría: %s\n", categoria);

   // Mensaje adicional según país
   switch (pais) {
      case 1:
         printf("Cliente nacional\n");
         break;
      case 2:
         printf("Cliente europeo\n");
         break;
      case 3:
         printf("Cliente internacional\n");
         break;
      default:
         printf("Código de país no válido\n");
   }
   return 0;
}
