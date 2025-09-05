// Ejercicio 7.12. Refactorización del cálculo de precio con IVA  
#include <stdio.h>

double calcular_precio_con_iva(double base);
void mostrar_precio(double precio_final);

int main() {
   double precio = 100;
   double total = calcular_precio_con_iva(precio);
   mostrar_precio(total);
   return 0;
}

double calcular_precio_con_iva(double base) {
   return base + (base * 0.21);
}

void mostrar_precio(double precio_final) {
   printf("Precio final: %.2f\n", precio_final);
}

