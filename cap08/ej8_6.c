// Ejercicio 8.6. Contar mayúsculas
#include <stdio.h>

int contar_mayusculas(char cad[]) {
   int contador = 0;
   for (int i = 0; cad[i] != '\0'; i++) {
      if (cad[i] >= 'A' && cad[i] <= 'Z') {
         contador++;
      }
   }
   return contador;
}

int main() {
   char palabra[40];
   printf("Palabra: ");
   scanf("%s", palabra);

   int n = contar_mayusculas(palabra);

   printf("%s tiene %d mayúsculas\n", palabra, n);
   return 0;
}
