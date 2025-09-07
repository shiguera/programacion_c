// Ejercicio 4.10. Permisos de usuario (fall-through intencionado)
#include <stdio.h>

int main() {
   int nivel;
   printf(
       "Introduce el nivel de usuario (1: Básico, 2: Avanzado, 3: "
       "Administrador): ");
   scanf("%d", &nivel);

   printf("Permisos concedidos:\n");

   switch (nivel) {
      case 3:
         printf("- Acceso a configuración avanzada\n");
      // fall-through intencionado
      case 2:
         printf("- Acceso a informes y estadísticas\n");
      // fall-through intencionado
      case 1:
         printf("- Acceso a funciones básicas\n");
         break;
      default:
         printf("Nivel no válido\n");
   }

   return 0;
}