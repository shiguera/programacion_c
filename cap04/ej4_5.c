// Ejercicio 4.5. Corrección de errores típicos
#include <stdio.h>

int main() {
   int numero;
   scanf("%d", &numero);

   // Comparar con doble igual
   if (numero == 10) {
      printf("El número es diez\n");
   } else {
      printf("El número no es diez\n");
   }

   return 0;
}