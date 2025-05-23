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
/*
En herencia protected, los miembros protected de la clase base siguen siendo accesibles en la clase derivada, pero no accesibles desde fuera.

Cliente no puede acceder directamente desde main() a nombre, pero sí puede dentro de sus propios métodos.
*/