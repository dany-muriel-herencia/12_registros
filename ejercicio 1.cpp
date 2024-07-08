#include <iostream>
using namespace std;

// Definición de la estructura contactoEmail
struct ContactoEmail {
    string nombres;
    char sexo;
    int edad;
    string email;
};

// Función principal para el menú
int main() {
    char opcion;

    do {
        cout << "\nMenú Principal:" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Mostrar todos los contactos" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case '1':
                agregarContacto();
                break;
            case '2':
                mostrarContactos();
                break;
            case '3':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
        }
    } while (opcion != '3');

    return 0;
}
