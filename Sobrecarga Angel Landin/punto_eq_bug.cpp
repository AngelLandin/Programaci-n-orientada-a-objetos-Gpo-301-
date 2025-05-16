// punto_eq_bug.cpp
#include <iostream>
using namespace std;

class Punto {
    public:
    int x, y;

    Punto(int x, int y) : x(x), y(y) {}

    //Codigo corregido
    bool operator==(const Punto& p) const {
        return (x == p.x && y == p.y);  // BUG: ¿qué no está bien?
    }

    //El original no estaba bien debido a que el parametro no era un const y le faltaba
    // & para pasar la referencia del objeto.
    // Error al comparar valores, tenia el operador de asignacion "=" en vez del de comparacion "=="
};