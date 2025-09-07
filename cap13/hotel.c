#include <stdio.h>
#include <stdbool.h>

#define NUM_HABITACIONES 4

typedef struct {
   int numero;
   int camas;
   double precio;
   bool reservada;
} Habitacion;

typedef Habitacion Hotel[NUM_HABITACIONES];

bool reservar_habitacion(Hotel hotel, int num_habitacion);
void listar_habitaciones_libres(Hotel hotel);
double get_precio(Hotel hotel, int num_habitacion);
double facturacion(Hotel hotel);
bool desocupar_habitacion(Hotel hotel, int num_habitacion);

int main() {

    Hotel hotel = {
        {101, 2, 36.0, false},
        {102, 2, 36.0, false},
        {103, 3, 54.0, false},
        {104, 1, 30.0, false}
    };

    reservar_habitacion(hotel, 102);
    listar_habitaciones_libres(hotel);

    int num_habitacion = 103;
    double precio = get_precio(hotel, 103);
    printf("\nHabitación:%d Precio: %.2f\n", num_habitacion, precio);

    double facturacion_dia = facturacion(hotel);
    printf("\nFacturación diaria: %.2f\n", facturacion_dia);

    bool result = desocupar_habitacion(hotel, num_habitacion);
    if(result == true) {
        printf("\nSe desocupó la habitación %d\n", num_habitacion);
    } else {
        printf("\nNo fué posible desocupar la habitación %d\n", num_habitacion);
    }

    return 0;
}

bool reservar_habitacion(Hotel hotel, int num_habitacion) {
    bool result = false;
    for(int i=0; i<NUM_HABITACIONES; i++) {
        if( ( hotel[i].numero == num_habitacion) && (hotel[i].reservada==false) ) {
            hotel[i].reservada = true;
            result = true;
            break;
        }
    }
    return result;
}

void listar_habitaciones_libres(Hotel hotel) {
    printf(" N  Camas  Precio Libre\n");
    for(int i=0; i<NUM_HABITACIONES; i++) {
        Habitacion h = hotel[i];
        if(h.reservada == false) {
            printf("%3d %4d %8.2f %4s\n", h.numero, h.camas, h.precio, h.reservada?"NO": "SI");
        }
    }
}

double get_precio(Hotel hotel, int num_habitacion) {
    double precio = -1.0;
    for(int i=0; i<NUM_HABITACIONES; i++) {
        if(hotel[i].numero == num_habitacion) {
            precio = hotel[i].precio;
            break;
        }
    }
    return precio;
}

double facturacion(Hotel hotel) {
    double suma = 0.0;
    for(int i=0; i<NUM_HABITACIONES; i++) {
        if(hotel[i].reservada == true) {
            suma += hotel[i].precio;
        }
    }
    return suma;
}

bool desocupar_habitacion(Hotel hotel, int num_habitacion) {
    bool result = false;
    for(int i=0; i<NUM_HABITACIONES; i++) {
        if(hotel[i].numero == num_habitacion) {
            hotel[i].reservada = false;
            result = true;
            break;
        }
    }
}