#include <iostream>
using namespace std;

class Dispositivo {
public:
    string marca;

    Dispositivo() {}

    Dispositivo(const string& marca) : marca(marca) {}
};

class Tablet : virtual public Dispositivo {
public:
    Tablet() {}  
};

class Telefono : virtual public Dispositivo {
public:
    Telefono() {}  
};

// Smartphone debe construir la única instancia de Dispositivo
class Smartphone : public Tablet, public Telefono {
public:
    Smartphone(const string& marca) : Dispositivo(marca), Tablet(), Telefono() {}
};

int main() {
    Smartphone s("Samsung");
    cout << s.marca << endl;  
    return 0;
}
