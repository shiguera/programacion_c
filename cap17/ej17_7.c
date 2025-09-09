// Ejercicio 17.7  offsetof() en una estructura (<stddef.h>)
#include <stddef.h>
#include <stdio.h>

struct Punto {
   int x, y;
   double w;
};

int main(void) {
   printf("Offset(x) = %zu\n", (size_t)offsetof(struct Punto, x));
   printf("Offset(y) = %zu\n", (size_t)offsetof(struct Punto, y));
   printf("Offset(w) = %zu\n", (size_t)offsetof(struct Punto, w));
   return 0;
}
