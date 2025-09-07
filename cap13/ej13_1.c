// Ejercicio 13.1 Arrays estáticos: precio habitación.
double get_precio(Hotel hotel, int num_habitacion) {
   double precio = -1.0;
   for (int i = 0; i < NUM_HABITACIONES; i++) {
      if (hotel[i].numero == num_habitacion) {
         precio = hotel[i].precio;
         break;
      }
   }
   return precio;
}