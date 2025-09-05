// Ejercicio 7.8. Media de los elementos de un array   
#include <stdio.h>

double media(double v[], int n);

int main() {
   double notas[] = {7.5, 8.0, 6.5, 9.0};
   int tam = 4;
   printf("Media: %.2f\n", media(notas, tam));
   return 0;
}

double media(double v[], int n) {
   double suma = 0.0;
   for (int i = 0; i < n; i++) {
      suma += v[i];
   }
   return suma / n;
}   
