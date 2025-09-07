// Ejercicio 10.6. Uso de enum.
#include <stdio.h>

// Unión para ver un entero como un array de bytes
union Numero {
   unsigned int valor;
   unsigned char bytes[4];
};

int main(void) {
   union Numero n;
   n.valor = 0x12345678;  // Valor hexadecimal de ejemplo

   for (int i = 0; i < 4; i++) {
      printf("Byte %d: %02X\n", i, n.bytes[i]);
   }
   return 0;
}