// Ejercicio 6.11. Búsqueda de un valor en un array.
// Explicación:
// El programa recorre el array y compara cada elemento
// con el valor buscado. Utiliza una bandera (encontrado)
// para indicar si se ha hallado el número.
// Prueba a resolverlo con un bucle for, pero sin utilizar
// la instrucción break.
// Prueba también a resolverlo sin usar break y utilizando
// un bucle while.
#include <stdio.h>

int main() {
   int numeros[10] = {4, 7, 1, 9, 3, 5, 8, 6, 2, 0};
   int buscado, encontrado = 0;

   printf("Introduce el número a buscar: ");
   scanf("%d", &buscado);

   for (int i = 0; i < 10; i++) {
      if (numeros[i] == buscado) {
         encontrado = 1;
         break;
      }
   }
   if (encontrado) {
      printf("El número %d se encuentra en el array.\n", buscado);
   } else {
      printf("El número %d no se encuentra en el array.\n", buscado);
   }
   return 0;
}
