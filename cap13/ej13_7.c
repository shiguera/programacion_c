// Ejercicio 13.7 Array compactado: añadir array de puntos.
void anadir_puntos(PoliLinea* plinea, Punto* puntos, int num_puntos) {
   for (int i = 0; i < num_puntos; i++) {
      anadir_vertice(plinea, puntos[i]);
   }
}
