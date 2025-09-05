// Ejercicio 7.11. MCD y MCM de dos números
#include <stdio.h>

int mcd(int a, int b);
int mcm(int a, int b);

int main() {
   int x, y;   
   printf("Introduce dos enteros positivos: ");
   scanf("%d %d", &x, &y);
   printf("MCD: %d\n", mcd(x, y));
   printf("MCM: %d\n", mcm(x, y));
   return 0;
}

int mcd(int a, int b) {
   if (b == 0) {
      return a;
   } else {
      return mcd(b, a % b);
   }
}

int mcm(int a, int b) {
   return (a * b) / mcd(a, b);
}
