// complejo_bug.cpp
// Detección y corrección de errores
#include <iostream>
using namespace std;

class Complejo {
public:
double re, im;
    Complejo(double r, double i) : re(r), im(i) {}
    // BUG: firma incorrecta y falta const
    Complejo operator+(const Complejo& otro) {
        return Complejo(re + otro.re, im + otro.im);
 }
};

int main() {
 Complejo x(0.5, 0.5), y(1.5, 2.0);
 Complejo z = x + y;
 cout << "(" << z.re << ", " << z.im << ")" << endl;
 return 0;
}