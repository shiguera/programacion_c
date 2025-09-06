// Ejercicio 5.12. Conversión de binario a decimal.
#include <stdio.h>

int main() {
   int binario;
   printf("Introduce un número binario (solo dígitos 0 y 1): ");
   scanf("%d", &binario);

   int decimal = 0;
   int potencia = 0;
   int original = binario;

   printf("Expresión polinómica: ");

   while (binario > 0) {
      int digito = binario % 10;
      if (digito != 0 && digito != 1) {
         printf("\nError: el número no es binario.\n");
         return 1;
      }
      if (potencia > 0) {
         printf(" + ");
      }
      printf("%d×2^%d", digito, potencia);
      decimal += digito * (1 << potencia);  // equivale a pow(2, potencia)
      binario /= 10;
      potencia++;
   }
   printf(" = %d\n", decimal);
}
