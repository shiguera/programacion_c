// Ejercicio 17.4 Tiempo de CPU con clock() (<time.h>)
#include <stdio.h>
#include <time.h>

int main(void) {
   clock_t inicio = clock();
   volatile double s = 0.0;
   for (long long i = 1; i <= 10000000LL; ++i) {
      s += i * 0.000001;
   }
   clock_t fin = clock();
   double tcpu = (double)(fin - inicio) / CLOCKS_PER_SEC;
   printf("Resultado= %.3f, tiempo de CPU= %.3f s\n", s, tcpu);
   return 0;
}
