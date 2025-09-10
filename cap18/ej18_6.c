// Ejercicio 18.6. Variable global compartida.
/* ---------- contador.h ---------- */
#ifndef CONTADOR_H
#define CONTADOR_H
extern int contador;
void incrementar(void);
void reiniciar(void);
#endif

/* ---------- contador.c ---------- */
#include "contador.h"
int contador = 0;
void incrementar(void) { 
    contador++; 
}
void reiniciar(void) { 
    contador = 0; 
}

/* ---------- main.c ---------- */
#include <stdio.h>

#include "contador.h"
int main(void) {
   reiniciar();
   incrementar();
   incrementar();
   printf("contador = %d\n", contador);
   reiniciar();
   incrementar();
   printf("contador = %d\n", contador);
   return 0;
}
