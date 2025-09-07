// Ejercicio 4.8. Menú de opciones con switch
#include <stdio.h>

int main() {
   int opcion;
   printf("1. Alta de usuario\n");
   printf("2. Baja de usuario\n");
   printf("3. Modificar datos\n");
   printf("4. Salir\n");
   printf("Seleccione una opción: ");
   scanf("%d", &opcion);

   switch (opcion) {
      case 1:
         printf("Alta de usuario\n");
         break;
      case 2:
         printf("Baja de usuario\n");
         break;
      case 3:
         printf("Modificar datos\n");
         break;
      case 4:
         printf("Salir\n");
         break;
      default:
         printf("Opción no válida\n");
   }

   return 0;
}
