// Ejercicio 9.12. UML a código.
#include <stdio.h>
#include <string.h>

typedef struct {
   char titulo[100];
   char autor[60];
   int paginas;
} Libro;

int main() {
   Libro u = {"Programming in C", "Stephen G. Kochan", 525};

   printf("Título: %s\nAutor: %s\nPáginas: %d\n", u.titulo, u.autor, u.paginas);

   return 0;
}