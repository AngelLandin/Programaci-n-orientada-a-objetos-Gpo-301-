// contador_inc_bug.cpp
#include <iostream>
using namespace std;

class Contador {
    int valor;
public:
    Contador(int v) : valor(v) {}

    Contador operator++(int) {
        Contador temp = *this;
        valor++;
        return temp;
        //return *this;  // BUG: ¿qué comportamiento falla
        //return *this; falla porque retorna el estado actual del objeto, es decir cuando el valor
        //ya esta incrementado (pre-incremento) y no estaria cumpliendo el
        //comportamiento del post-incremento.
    }

    int get() const { return valor; }
};

int main() {
    Contador cnt(7);
    Contador old = cnt++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
}