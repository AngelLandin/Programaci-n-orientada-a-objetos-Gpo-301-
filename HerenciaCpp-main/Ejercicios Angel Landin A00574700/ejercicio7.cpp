#include <iostream>
using namespace std;

class Instrumento {
public:
    string instrumento;
    Instrumento(string nombreInstrumento) : instrumento(nombreInstrumento) {}
    virtual void tocar() {
        cout << "El instrumento " << instrumento << " Esta sonando..." <<endl;
    }
};

class Guitarra : public Instrumento {
public:
    Guitarra() : Instrumento("Guitarra") {}
    void tocar() override {
        cout << "♫♫♫ Tocando la guitarra ting ting ting ♫♫♫" <<endl;
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    Instrumento instrumento1("Maracas");
    probar(&instrumento1);
    probar(&g);
    return 0;
}