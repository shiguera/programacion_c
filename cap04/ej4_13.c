// Ejercicio 4.13 Reescritura para mejorar legibilidad
if (x > 0) {
   if (x < 10) {
      printf("El número está entre 1 y 9\n");
   } else {
      printf("El número es 10 o mayor\n");
   }
} else {
   printf("El número es negativo o cero\n");
}

// Versión más clara:
if (x > 0 && x < 10) {
   printf("El número está entre 1 y 9\n");
} else if (x >= 10) {
   printf("El número es 10 o mayor\n");
} else {
   printf("El número es negativo o cero\n");
}