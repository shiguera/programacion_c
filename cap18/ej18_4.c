// Ejercicio 18.4. Guardas de inclusión.
/* ---------- util.h (con guardas) ---------- */
#ifndef UTIL_H
#define UTIL_H

int doble(int x);
int triple(int x);

#endif

/* ---------- util.c ---------- */
#include "util.h"
int doble(int x) { return 2 * x; }
int triple(int x) { return 3 * x; }

/* ---------- main.c (incluye dos veces la misma cabecera, sin error) ----------
 */
#include <stdio.h>

#include "util.h"

int main(void) {
   printf("%d %d\n", doble(4), triple(4));
   return 0;
}
