// Ejercicio 8.8
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
         posicion = i + 1;
         break;
      }
   }

   if (posicion == -1) {
      printf("La letra %c no está en %s\n", letra, palabra);
   } else {
      printf("Letra %c en posición %d de %s\n", letra, posicion, palabra);
   }

   return 0;
}