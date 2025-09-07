// Ejercicio 10.4. Uso de union}.
#include <stdio.h>

// Unión para almacenar distintos tipos de datos
union Dato {
   char caracter;
   int entero;
   float real;
};

int main(void) {
   union Dato d;
   int opcion;

   printf("1. Caracter\n2. Entero\n3. Real\nOpción: ");
   scanf("%d", &opcion);

   if (opcion == 1) {
      printf("Introduce caracter: ");
      scanf(" %c", &d.caracter);  // Espacio antes de %
      printf("Has introducido: %c\n", d.caracter);
   } else if (opcion == 2) {
      printf("Introduce entero: ");
      scanf("%d", &d.entero);
      printf("Has introducido: %d\n", d.entero);
   } else if (opcion == 3) {
      printf("Introduce real: ");
      scanf("%f", &d.real);
      printf("Has introducido: %.2f\n", d.real);
   }
   return 0;
}