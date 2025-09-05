// Ejercicio 7.3. Conversión de grados Celsius a Fahrenheit
#include <stdio.h>

double celsius_a_fahrenheit(double c) {
   return (9.0 / 5.0) * c + 32;
}

int main() {
   double c;
   printf("Introduce grados Celsius: ");
   scanf("%lf", &c);
   printf("Equivalente en Fahrenheit: %.2f\n", celsius_a_fahrenheit(c));
   return 0;
}