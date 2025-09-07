// Ejercicio 12.2. Copiar y mostrar.
#include <stdio.h>
#include <string.h>

int main() {
   char original[100];
   char copia[100];

   printf("Introduce una palabra: ");
   scanf("%s", original);
   
   strcpy(copia, original);
   printf("Original: %s\n", original);
   printf("Copia: %s\n", copia);
   return 0;
}
