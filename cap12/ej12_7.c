// Ejercicio 12.7. Contar vocales usando strpbrk().
#include <stdio.h>
#include <string.h>

int main() {
   char texto[100];
   const char* vocales = "aeiouAEIOU";
   int contador = 0;

   printf("Introduce una cadena: ");
   scanf("%s", texto);

   for (int i = 0; texto[i] != '\0'; i++) {
      if (strchr(vocales, texto[i]) != NULL) {
         contador++;
      }
   }

   printf("Número de vocales: %d\n", contador);
   return 0;
}
