// contador_inc.cpp

#include <iostream>
using namespace std;

class Contador {
private:
    int valor;
public:
    Contador(int v) : valor(v) {}

    Contador operator++(int){
        Contador temp = *this;
        valor++;
        return temp;
    }

    int get() const{
        return this->valor;
    }
};

int main(){
    Contador cnt(7);
    Contador old = cnt++;

    Contador cnt2(99);
    Contador old2 = cnt2++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
    cout << "Old: " << old2.get() << ", New: " << cnt2.get() << endl;

    return 0;
}