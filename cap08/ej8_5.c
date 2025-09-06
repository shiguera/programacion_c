// Ejercicio 8.5.  Concatenar nombres.
#include <stdio.h>
#include <string.h>

int main() {
   char nombre[50], apellido[50], completo[99];

   printf("Introduce nombre: ");
   scanf("%s", nombre);

   printf("Introduce apellido: ");
   scanf("%s", apellido);

   int ultimo = strlen(nombre);
   for (int i = 0; i < ultimo; i++) {
      completo[i] = nombre[i];
   }
   completo[ultimo] = ' ';
   for (int i = 0; i < strlen(apellido); i++) {
      completo[ultimo + i + 1] = apellido[i];
   }
   ultimo = strlen(nombre) + strlen(apellido) + 1;
   completo[ultimo] = '\0';

   printf("Nombre completo: %s\n", completo);
   return 0;
}
