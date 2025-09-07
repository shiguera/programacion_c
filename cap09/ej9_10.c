// Ejercicio 9.10. Copia de array dentro de estructura.
#include <stdio.h>

typedef struct {
   char texto[100];
} Cadena;

int main() {
   Cadena c1 = {"Hola mundo"};
   Cadena c2 = c1;  // Copia directa, no necesita strcpy
   printf("Cadena copiada: %s\n", c2.texto);

   return 0;
}