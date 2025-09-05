// Ejercicio 7.10. Suma recursiva de un array   
#include <stdio.h>

int suma_array(int v[], int n);

int main() {
   int datos[] = {3, 5, 2, 4};
   int tam = 4;
   printf("Suma: %d\n", suma_array(datos, tam));
   return 0;
}

int suma_array(int v[], int n) {
   if (n == 0) {
      return 0;
   } else {
      return v[n-1] + suma_array(v, n-1);
   }
}   
