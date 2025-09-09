// Ejercicio 17.9 Número aleatorio en [1,6] (<stdlib.h> + <time.h>)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   srand((unsigned)time(NULL));
   int dado = 1 + rand() % 6;
   printf("Tirada de dado: %d\n", dado);
   return 0;
}
