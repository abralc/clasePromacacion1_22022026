#include "Persona.cpp"

using namespace std;

class Docente : public Persona {
protected:
    string codigo;
    string nit;
    float salario;
    string profesion;

public:
    // Constructor por defecto
    Docente();

    // Constructor con parámetros
    Docente(string _cui, string _nombres, string _apellidos, string _direccion,
            int _telefono, string _fecha_nacimiento, bool _genero,
            string _codigo, string _nit, float _salario, string _profesion);

    // Método básico
    void leer();
};

