#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
};

class Empleado : protected Persona {
public:

    void mostrarDatos() {
        cout<<"Nombre: "<< nombre<<", Edad: " <<edad<<endl;
    }
};

int main() {
    Empleado emp;
    emp.mostrarDatos();
    return 0;
}