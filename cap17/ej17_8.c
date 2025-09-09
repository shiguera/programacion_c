// Ejercicio 17.8 Enteros de tamaño fijo (<stdint.h>) y tamaños
#include <stdint.h>
#include <stdio.h>

int main(void) {
   uint8_t a = 200;
   uint32_t b = 4000000000u;

   printf("a = %u, sizeof(a) = %zu\n", (unsigned)a, sizeof a);
   printf("b = %u, sizeof(b) = %zu\n", (unsigned)b, sizeof b);
   return 0;
}
