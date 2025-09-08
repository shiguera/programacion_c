// Ejercicio 14.5. Lectura de fecha.
// La cadena de formato "%d/%d/%d" exige los separadores / literalmente: 
// si el usuario no los teclea, la lectura falla. 
// Además, este ejercicio no valida rangos (p. ej., 31/02/2025). 
// Si te interesa robustecerlo, comprueba que scanf() devuelve 3 
// y valida día/mes/año.

#include <stdio.h>

int main() {
   int d, m, a;
   scanf("%d/%d/%d", &d, &m, &a);
   printf("Día: %d, Mes: %d, Año: %d\n", d, m, a);
   return 0;
}