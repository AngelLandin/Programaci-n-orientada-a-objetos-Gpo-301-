#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;

public:
    Persona(const string nombre) : nombre(nombre) {}
};

class Cliente : protected Persona {
public:
    Cliente(const string nombre) : Persona(nombre) {}
    void mostrar() {
        cout << nombre << endl; // Error si se cambia a private
    }
};

int main() {
    Cliente c("Camilo");
    c.mostrar();
    return 0;
}