// Ejercicio 14.12. Mini–calculadora.
// En scanf("\%lf \%c \%lf", ...), los espacios en la
// cadena de formato saltan cualquier cantidad de blancos
// y ayudan a que \%c no consuma un \n residual.
// Si quisieras evitar dependencias de espacios, podrías
// insertar un espacio explícito antes de %c: "%lf %c %lf"
// ya lo hace (los espacios fuera de los especificadores ignoran blancos).
// Recuerda manejar división por cero como ya está hecho.
#include <stdio.h>

int main() {
   double a, b;
   char op;
   scanf("%lf %c %lf", &a, &op, &b);

   if (op == '+') {
      printf("Resultado: %.2f\n", a + b);
   } else if (op == '-') {
      printf("Resultado: %.2f\n", a - b);
   } else if (op == '*') {
      printf("Resultado: %.2f\n", a * b);
   } else if (op == '/') {
      if (b != 0) {
         printf("Resultado: %.2f\n", a / b);
      } else {
         printf("Error: división por cero\n");
      }
   } else {
      printf("Operador no válido\n");
   }
   return 0;
}
