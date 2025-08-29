// Ejercicio 1.6. Cálculo del área de un triángulo
#include <stdio.h>

int main(void) {
   double base, altura, area;
   printf("Introduce la base: ");
   scanf("%lf", &base);
   printf("Introduce la altura: ");
   scanf("%lf", &altura);
   area = (base * altura) / 2.0;
   printf("El área del triángulo es: %.2f\n", area);
   return 0;
}