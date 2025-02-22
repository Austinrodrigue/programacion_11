#include <iostream>

int main() {
    int edad;
    char Boleto;
    const double precio = 100.0;
    int precioFinal = precio; 
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    std::cout << "Elija un tipo de boleto:(N) Normal(E) Estudiante (descuento del 50%)(S) senor (descuento del 30% para mayores de 60)";
    std::cin >> Boleto;
    if (edad < 5) {
        precioFinal = 0.0;  
    } else {
        if (Boleto == 'E' ) {
            precioFinal = precio * 0.5; 
        } else if (Boleto == 'S') {
            if (edad > 60) {
                precioFinal = precio * 0.7; 
            }
        }
    }

    std::cout << "El precio final del boleto es: $" << precioFinal << std::endl;

    return 0;
}
