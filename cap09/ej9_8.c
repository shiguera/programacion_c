// Ejercicio 9.8. Estructura devuelta por función.
#include <stdio.h>

typedef struct {
   int r, g, b;
} ColorRGB;

ColorRGB crear_color(int r, int g, int b) {
   ColorRGB c = {r, g, b};
   return c;
}

int main() {
   ColorRGB azul = crear_color(0, 0, 255);
   printf("Color creado: (%d, %d, %d)\n", azul.r, azul.g, azul.b);
   return 0;
}