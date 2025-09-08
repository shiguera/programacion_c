// Ejercicio 14.10. Lectura con sscanf().
// %s se detiene en el primer espacio y puede desbordar si el nombre es
// más largo que el array. Mejor usar un ancho máximo: "%19s %d %f"
// para char nombre[20]. Además, comprueba que sscanf() devuelve 3
// antes de usar las variables.
#include <stdio.h>

int main() {
   char cadena[] = "Juan 25 1.75";
   char nombre[20];
   int edad;
   float altura;

   sscanf(cadena, "%s %d %f", nombre, &edad, &altura);

   printf("Nombre: %s\n", nombre);
   printf("Edad: %d\n", edad);
   printf("Altura: %.2f\n", altura);
   return 0;
}
