#include <iostream>

using namespace std;

class Usuario {
public:
    string correo;
    const int ID;
    string nombre;

    Usuario(const string nombre, const string correo, const int id) : nombre(nombre), correo(correo), ID(id) {}

    void login() {
        cout << "---------------------- Login exitoso ---------------------------" << endl
             << "Nombre: " << nombre << endl
             << "Correo: " << correo << endl
             << "ID: " << ID << endl; 
    }
};

class Moderador : public Usuario {
public:
    Moderador(const string nombre, const string correo, const int id) : Usuario(nombre, correo, id) {}

    void moderar() {
        cout << "Usuario ID[" << ID << "] - " << nombre << " ahora es Moderador." << endl;
    }
};

class Admin : public Moderador {
public:
    Admin(const string nombre, const string correo, const int id) : Moderador(nombre, correo, id) {}

    void banear(const string usuario_baneado) {
        cout << "El ADMIN " << nombre << " ha baneado al usuario: " << usuario_baneado << endl;
    }
};

int main() {
    Admin admin("Eduardo", "eduardhino@gmail.com", 123223);

    admin.login();      
    admin.moderar();      
    admin.banear("Camilo"); 
}
