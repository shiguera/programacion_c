// Ejercicio 13.3 Arrays estáticos: desocupar habitación.
bool desocupar_habitacion(Hotel hotel, int num_habitacion) {
   bool result = false;
   for (int i = 0; i < NUM_HABITACIONES; i++) {
      if (hotel[i].numero == num_habitacion) {
         hotel[i].reservada = false;
         result = true;
         break;
      }
   }
}
