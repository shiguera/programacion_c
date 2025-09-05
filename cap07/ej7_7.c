// Ejercicio 7.7. Contador con variable estática  
#include <stdio.h>

void contador();

int main() {
   contador(); // Imprime 1
   contador(); // Imprime 2
   contador(); // Imprime 3
   return 0;
}

void contador() {
   static int c = 0; // se conserva entre llamadas
   c++;
   printf("Contador: %d\n", c);
}

