// Ejercicio 9.4. Inicialización con llaves.
#include <stdio.h>

struct ColorRGB {
   int r, g, b;
};

int main() {
   struct ColorRGB color = {255, 200, 100};
   printf("Color RGB: (%d, %d, %d)\n", color.r, color.g, color.b);
   return 0;
}