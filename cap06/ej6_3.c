// Ejercicio 6.3. Array constante.
#include <stdio.h>

int main() {
   const char letras[] = {'A', 'B', 'C'};

   // letras[1] = 'Z'; // Descomenta esta línea y obtendrás un error

   printf("letras[1] = %c\n", letras[1]);

   return 0;
}
