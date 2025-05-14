#include <iostream>
#include <string>
using namespace std;

class Empleado{
public:
    string nombre;
    int id;

    Empleado(int id, string nombre) : id(id), nombre(nombre) {}

    friend ostream& operator<<(ostream& os, const Empleado& empleado){
        os << "Empleado[" << empleado.id << "]: " << empleado.nombre;
        return os;
    }

};

int main(){
    Empleado em1(1,"Erick");
    Empleado em2(101, "Ana");
    cout << em1 << endl;
    cout << em2 << endl;
    return 0;
}