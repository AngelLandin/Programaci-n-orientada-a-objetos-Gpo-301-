#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    
    void comer() {
        cout <<"El animal esta comiendo mmmm comidita" << endl;
    }
    void mostrar() {}
};

class Perro : public Animal {
public:
    string nombre;
    string raza;
    int edad;
    Perro(string nombre, string raza, int edad) : nombre(nombre), raza(raza), edad(edad) {}
    void ladrar() {
        cout << "Guauf guauf"<<endl;
    }

    void mostrar(){
        cout << "Nombre: " << nombre << ", Raza: " << raza << ", Edad: " << edad<<endl;
    }
};

int main() {

    Perro miPerro("Fintitas", "Chihuahua", 6);
    miPerro.comer();
    miPerro.ladrar();
    miPerro.mostrar();
    return 0;
}