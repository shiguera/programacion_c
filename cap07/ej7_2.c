// Ejercicio 7.2. Mínimo de dos números
#include <stdio.h>

double minimo(double x, double y) {
   if(x < y) {
      return x;
   } else {
      return y;
   } 
}

int main() {
   double a, b;
   printf("Introduce dos números: ");
   scanf("%lf %lf", &a, &b);
   printf("El mínimo es: %.2f\n", minimo(a, b));
   return 0;
}

