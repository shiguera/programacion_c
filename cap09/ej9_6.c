// Ejercicio 9.6. Estructuras anidadas.
#include <stdio.h>

typedef struct {
   double x, y;
} Punto2D;

typedef struct {
   Punto2D esquina_sup_izq;
   Punto2D esquina_inf_der;
} Rectangulo;

int main() {
   Rectangulo r = {{1.0, 5.0}, {6.0, 1.0}};
   double base = r.esquina_inf_der.x - r.esquina_sup_izq.x;
   double altura = r.esquina_sup_izq.y - r.esquina_inf_der.y;

   printf("Base: %.2f, Altura: %.2f\n", base, altura);
   return 0;
}