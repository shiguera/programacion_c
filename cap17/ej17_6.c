// Ejercicio 17.6 Precondición con assert() (<assert.h>)
#include <assert.h>
#include <stdio.h>

int dividir(int a, int b) {
   assert(b != 0);  // precondición
   return a / b;
}
int main(void) {
   int a = 20, b = 4;
   printf("%d / %d = %d\n", a, b, dividir(a, b));
   // Descomenta para ver fallar la aserción:
   // b = 0; printf("%d / %d = %d\n", a, b, dividir(a, b));
   return 0;
}
