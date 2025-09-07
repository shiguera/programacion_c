// Ejercicio 12.9. Validación numérica.
#include <stdio.h>
#include <string.h>

int main() {
   char codigo[100];

   printf("Introduce un código: ");
   scanf("%s", codigo);

   if (strspn(codigo, "0123456789") == strlen(codigo)) {
      printf("El código es válido (solo dígitos).\n");
   } else {
      printf("El código contiene caracteres no numéricos.\n");
   }

   return 0;
}
