#include <iostream>
using namespace std;
#include <cstring>

class Buffer{
    char* datos;
    size_t n;

public:
    Buffer (const char* s) {
        n = strlen(s);
        datos = new char[n+1];
        strcpy(datos, s);
    }

    ~Buffer(){
        delete[] datos;
    }

    Buffer& operator=(const Buffer& otro){
        if (this != &otro){
            delete[] datos;
            n = otro.n;
            datos = new char[n + 1];
            strcpy(datos, otro.datos);            
        }
        return *this;
        
    }

    void print() const{
        cout << datos << endl;
    }
};

int main() {
    Buffer b1("Hola"), b2("Mundo");
    b1 = b2;
    b1.print();  // Mundo

    Buffer b3("Lava Chicken"), b4("Steve");
    b4 = b3; 
    b4.print(); //Lava Chicken
}
   


