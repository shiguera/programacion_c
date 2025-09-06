// Ejercicio 8.12. Reemplazar caracteres
#include <stdio.h>

int main() {
   char palabra[40];
   char letra_1, letra_2;
   printf("Palabra: ");
   scanf("%s", palabra);
   printf("Letra original: ");
   scanf(" %c", &letra_1);  // Espacio antes de %c

   printf("Letra sustituta: ");
   scanf(" %c", &letra_2);  // Espacio antes de %c

   for (int i = 0; palabra[i] != '\0'; i++) {
      if (palabra[i] == letra_1) {
         palabra[i] = letra_2;
      }
   }

   printf("%s\n", palabra);
   return 0;
}
