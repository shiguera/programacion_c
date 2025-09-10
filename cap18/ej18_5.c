// Ejercicio 18.5. Biblioteca de cadenas.
/* ---------- cadenas.h ---------- */
#ifndef CADENAS_H
#define CADENAS_H
#include <stddef.h>
size_t longitud(const char* s);
int es_mayuscula(char c); /* Devuelve 1 si 'A'..'Z' (ASCII), 0 en caso contrario */
#endif

/* ---------- cadenas.c ---------- */
#include "cadenas.h"
size_t longitud(const char* s) {
   size_t n = 0u;
   while (s[n] != '\0') {
      n++;
   }
   return n;
}
int es_mayuscula(char c) {
   return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

/* ---------- main.c ---------- */
#include <stdio.h>
#include "cadenas.h"
int main(void) {
   const char* t = "Hola";
   printf("longitud(\"%s\") = %zu\n", t, longitud(t));
   printf("es_mayuscula('H') = %d\n", es_mayuscula('H'));
   printf("es_mayuscula('h') = %d\n", es_mayuscula('h'));
   return 0;
}
