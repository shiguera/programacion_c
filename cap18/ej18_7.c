// Ejercicio 18.7. Evitar globales innecesarias.
/* ---------- contador_local.h ---------- */
#ifndef CONTADOR_LOCAL_H
#define CONTADOR_LOCAL_H
int incrementar(int valor);
int reiniciar(int valor);
#endif

/* ---------- contador_local.c ---------- */
#include "contador_local.h"
int incrementar(int valor) {
   return valor + 1;
}
int reiniciar(int valor) {
   (void)valor;
   return 0;
}

/* ---------- main.c ---------- */
#include <stdio.h>
#include "contador_local.h"
int main(void) {
   int contador = 0;
   contador = reiniciar(contador);
   contador = incrementar(contador);
   contador = incrementar(contador);
   printf("contador = %d\n", contador);
   return 0;
}
