#include <iostream>
using namespace std;

class A { 
    public: 
    virtual void imprimir() { 
        cout << "A"; 
    } 
};

class B : virtual  A {
    public:
        void imprimir() override{ 
            cout << "B"; 
        } 

};
class C : virtual A {
    public:
        void imprimir() override{ 
            cout << "C"; 
        } 

};
class D : public B, public C {
    public:
        void imprimir() override{ 
            cout << "D"; 
        } 
};

int main() {
    D obj;
    obj.imprimir(); // Error
    return 0;
}
/*
La herencia multiple presentaba ambigüedad porque D heredaba de dos clases hijas que heredaban de la misma clase padre,
y la herencia de las clases hijas era publica y no virtual generando ambigüedad, Esto provoca que la clase derivada tenga múltiples copias de la clase base, y el compilador no sabe cuál usar.
*/