// Ejercicio 4.14. Operador ternario (anidado).
#include <stdio.h>

int main(void) {
   int numero;

   // Solicitar un número al usuario
   printf("Introduce un número entero: ");
   scanf("%d", &numero);

   // Evaluar el signo utilizando el operador ternario anidado
   printf("%s\n", (numero > 0)   ? "Positivo"
                  : (numero < 0) ? "Negativo"
                                 : "Cero");
   return 0;
}
