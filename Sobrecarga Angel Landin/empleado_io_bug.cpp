#include <iostream>
using namespace std;

class Empleado{
    string nombre;
    int id;
public:
    Empleado(string n, int i) : nombre(n), id(i) {}

    //Corregi el valor de retorno de la funcion, retornaba un valor de tipo
    //ostream, pero no una referencia.
    // ostream -> ostream&
    friend ostream& operator<<(ostream& os, const Empleado& e){
        os << "ID=" << e.id << ", Nombre=" << e.nombre;
        return os;
    }
};

int main(){
    Empleado p1("Miguel", 1);
    cout << p1 << endl;

    return 0;
}