// complejo_suma.cpp
//Completación de código
#include <iostream>
using namespace std;

class Complejo {
public:
 double re, im;
 Complejo(double r, double i) : re(r), im(i) {}
 Complejo operator+(const Complejo& otro) {
     return Complejo(re + otro.re, im + otro.im); //Linea de codigo implementada
 }
};

int main() {
 Complejo x(0.5, 0.5), y(1.5, 2.0);
 Complejo z = x + y;
 cout << "(" << z.re << ", " << z.im << ")" << endl;
 
 Complejo x1(1.5, 2.5), y1(5.5, 2.5);
 Complejo z2 = x1 + y1;
cout << "(" << z2.re << ", " << z2.im << ")" << endl;

 return 0;
}

