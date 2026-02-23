#include <iostream>

using namespace std;

class Persona {
protected:
    string cui;
    string nombres;
    string apellidos;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    bool genero; 

public:
    // Constructor por defecto
    Persona();

    // Constructor con parámetros
    Persona(string _cui, string _nombres, string _apellidos, string _direccion,
            int _telefono, string _fecha_nacimiento, bool _genero);

    // Métodos CRUD
    void crear();
    void leer();
    void actualizar();
    void borrar();

};
