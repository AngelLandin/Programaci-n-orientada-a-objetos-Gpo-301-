#include <iostream>
using namespace std;

class Punto {
    public:
        int x, y;

        Punto(int x, int y) : x(x), y(y) {}

        bool operator==(const Punto& otro){
            return bool (x == otro.x && y == otro.y);
        }
};

int main(){
    Punto p1(2,4), p2(2,4);
    Punto p3(10, 20), p4(4,2);
    cout << boolalpha << "Son iguales p1 y p2: " << (p1 == p2) << endl;
    cout << boolalpha << "Son iguales p3 y p4: " << (p3 == p4) << endl;
}