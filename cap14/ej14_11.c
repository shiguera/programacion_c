// Ejercicio 14.11. Redondeo con cadenas.
// La técnica sprintf("%.2f", ...) + strtod() realiza un redondeo
// decimal (a 2 cifras) y luego lo reinterpreta como double.
// Útil para presentación o ciertos cálculos financieros, pero no
// sustituye a las funciones numéricas cuando se requiere precisión binaria.
// strtod() es preferible a atof(), porque permite detectar errores.
#include <stdio.h>
#include <stdlib.h>

int main() {
   double valor;
   char buffer[50];
   scanf("%lf", &valor);

   sprintf(buffer, "%.2f", valor);
   double redondeado = strtod(buffer, NULL);

   printf("Valor redondeado: %.2f\n", redondeado);
   return 0;
}
