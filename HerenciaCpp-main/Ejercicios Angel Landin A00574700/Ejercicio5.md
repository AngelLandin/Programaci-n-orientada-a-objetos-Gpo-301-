# Diagrama de clases:

```mermaid
classDiagram
    class Forma {
        +string color
        +dibujar()
    }

    class Cuadrado {
        +double lado
    }

    class Circulo {
        +double radio
    }

    Cuadrado --|> Forma
    Circulo --|> Forma
```

# Codigo c++ del diagrama:
```cpp
#include <iostream>
using namespace std;

class Forma {
public:
    string color;
    virtual void dibujar() {
        cout << "Dibujando" <<endl;
    }
};

class Cuadrado : public Forma {
public:
    double lado;
};

class Circulo : public Forma {
public:
    double radio;
};

int main(){
    Cuadrado cuadrado;
    cuadrado.dibujar();
}
```

## Salida
```
Dibujando
```