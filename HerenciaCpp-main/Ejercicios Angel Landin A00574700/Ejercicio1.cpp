#include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    void comer() {
        cout <<"El animal esta comiendo mmmm comidita" << endl;
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        cout << "Guauf guauf"<<endl;
    }
};

int main() {

    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    return 0;
}