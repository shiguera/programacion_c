// Ejercicio 1.3. Variables int y operadores
#include <stdio.h>

int main(void) {
   printf("4 / 3 = %d\n", 4 / 3);
   printf("4 %% 3 = %d\n", 4 % 3);
   printf("4 + 3 * 5 = %d\n", 4 + 3 * 5);
   printf("4 + 3 / 5 = %d\n", 4 + 3 / 5);
   printf("4 > 3 && 5 < 6 = %d\n", 4 > 3 && 5 < 6);
   printf("(4 > 3) && (5 < 6) = %d\n", (4 > 3) && (5 < 6));
   printf("4 < 3 || 5 > 2 = %d\n", 4 < 3 || 5 > 2);
   
   return 0;
}
