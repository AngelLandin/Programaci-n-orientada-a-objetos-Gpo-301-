#include <iostream>
using namespace std;

class Vehiculo {
public:
    void encender() {
        cout << "Vehículo encendido" << endl;
    }
};

class Coche : private Vehiculo {
    public:
        void encender() {
            cout << "Coche encendido" << endl;
        }
};

int main() {
    Coche miCoche;
    miCoche.encender(); // ¿Por qué falla?
    return 0;
    //Porque al heredar el atributo se hereda de manera privada, asi que en la clase
    //hija debemos de pasarlo a publico.
}