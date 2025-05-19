#include <iostream>
using namespace std;

class Persona {
protected:
    
    string nombre;
    int edad;
    Persona(string nom, int edad) : nombre(nom), edad(edad) {}
};

class Empleado : protected Persona {
public:
    Empleado(string nombre, int edad) : Persona(nombre, edad) {}

    void mostrarDatos() {
        cout<<"Nombre: "<< nombre<<", Edad: " <<edad<<endl;
    }
};

int main() {
    Empleado emp("Angel Landin", 19);
    emp.mostrarDatos();
    return 0;
}