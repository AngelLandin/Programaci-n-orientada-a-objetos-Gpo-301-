#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    string nombre;
    string raza;
    Animal(string nombre, string raza) : nombre(nombre), raza(raza) {}
    
    void comer() {
        cout << nombre <<" esta comiendo mmmm comidita" << endl;
    }
    void mostrar() {}
};

class Perro : public Animal {
public:
    int edad;
    Perro(string nombre, string raza, int edad) : Animal(nombre, raza), edad(edad) {}
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