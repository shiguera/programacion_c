// Ejercicio 8.11. Última aparición de letra
#include <stdio.h>

int main() {
   char palabra[40];
   char letra;
   printf("Palabra: ");
   scanf("%s", palabra);
   printf("Letra: ");
   scanf(" %c", &letra);  // Espacio antes de %c

   int posicion = -1;
   for (int i = 0; palabra[i] != '\0'; i++) {
      if (palabra[i] == letra) {
         posicion = i;
      }
   }

   if (posicion == -1) {
      printf("La letra %c no está en %s\n", letra, palabra);
   } else {
      printf("La última %c está en la posición %d\n", letra, posicion);
   }
   return 0;
}
