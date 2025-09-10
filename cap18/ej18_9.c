// Ejercicio 18.9. Compilación en dos pasos.
/* Comandos de compilación y enlace con gcc (dos pasos por módulo) */
gcc -std=c23 -Wall -Wextra -O2 -Iinclude -c src/ops.c   -o build/ops.o
gcc -std=c23 -Wall -Wextra -O2 -Iinclude -c src/main.c  -o build/main.o
gcc build/main.o build/ops.o -o build/programa
