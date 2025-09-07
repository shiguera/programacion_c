// Ejercicio 4.11. Operador ternario
#include <stdio.h>

int main() {
   int edad;
   printf("Introduce tu edad: ");
   scanf("%d", &edad);

   // Versión con operador ternario
   printf("%s\n", (edad >= 18) ? "Mayor de edad" : "Menor de edad");
   return 0;
}
