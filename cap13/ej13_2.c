// Ejercicio 13.2 Arrays estáticos: facturación diaria.
double facturacion(Hotel hotel) {
   double suma = 0.0;
   for (int i = 0; i < NUM_HABITACIONES; i++) {
      if (hotel[i].reservada == true) {
         suma += hotel[i].precio;
      }
   }
   return suma;
}
