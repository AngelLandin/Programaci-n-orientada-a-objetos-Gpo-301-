// buffer_asign_bug.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Buffer{
    char* datos;

public:
    Buffer(const char* s){
        datos = new char[strlen(s) + 1];
        strcpy(datos, s);
    }
    ~Buffer(){
        delete[] datos;
    }

    Buffer& operator=(const Buffer& otro){
        //datos = otro.datos; BUG: ¿qué problema surge aquí?
        //Le asignamos a datos la direccion de memoria de "otro", lo que provoca que ambos punteros apunten
        //al mismo bloque de memoria provocando un shallow copy.
        //Y al liberar la memoria, se haria doble liberacion para la misma direccion desencadenando un comportamiento indefinido.

        if(this != &otro){
            delete[] datos;
            datos = new char(strlen(otro.datos) + 1);
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