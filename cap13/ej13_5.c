// Ejercicio 13.5 Array con huecos: baja.
bool devolver(ListaPrestamos lista, char* titulo) {
   int result = false;
   int indice = buscar(lista, titulo);
   if (indice != -1) {
      lista[indice].ocupada = false;
      result = true;
   }
   return result;
}
