// Ejercicio 14.8. Precisión en coma flotante.
// La precisión en printf() afecta a la representación,
// no al valor almacenado: el double original no cambia.
// La salida se redondea al número de decimales pedido;
// es normal observar pequeñas discrepancias al comparar
// con cálculos posteriores (representación binaria vs. decimal).
#include <stdio.h>

int main() {
   double pi = 3.1415926535;
   printf("%.2f\n", pi);
   printf("%.4f\n", pi);
   printf("%.6f\n", pi);
   return 0;
}
