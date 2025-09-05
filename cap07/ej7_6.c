// Ejercicio 7.6. Área de un triángulo con estructura modular
// Archivo geometria.h
#ifndef GEOMETRIA_H
   #define GEOMETRIA_H
   
   double area_triangulo(double base, double altura);
#endif

// Archivo geometria.c
#include "geometria.h"

double area_triangulo(double base, double altura) {
   return (base * altura) / 2.0;
}

// Archivo main.c
#include <stdio.h>
#include "geometria.h"

int main() {
   double b, h;
   printf("Introduce base y altura: ");
   scanf("%lf %lf", &b, &h);
   printf("Área: %.2f\n", area_triangulo(b, h));
   return 0;
}

