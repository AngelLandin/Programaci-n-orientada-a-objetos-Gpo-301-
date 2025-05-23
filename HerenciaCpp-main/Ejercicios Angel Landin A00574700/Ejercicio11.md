# Diagrama UML de la herencia virtual de clases
```mermaind
classDiagram
    class Dispositivo {
        +string marca
    }

    class Tablet
    class Telefono
    class Smartphone

    Tablet ..|> Dispositivo : virtual
    Telefono ..|> Dispositivo : virtual
    Smartphone --> Tablet
    Smartphone --> Telefono
```

# El codigo es:

```cpp
#include <iostream>
using namespace std;

class Dispositivo {
public:
    string marca;

    Dispositivo() {}

    Dispositivo(const string& marca) : marca(marca) {}
};

class Tablet : virtual public Dispositivo {
public:
    Tablet() {}  
};

class Telefono : virtual public Dispositivo {
public:
    Telefono() {}  
};

class Smartphone : public Tablet, public Telefono {
public:
    Smartphone(const string& marca) : Dispositivo(marca), Tablet(), Telefono() {}
};

int main() {
    Smartphone s("Samsung");
    cout << s.marca << endl;  
    return 0;
}
```

# Salida del código
```
Samsung
```

