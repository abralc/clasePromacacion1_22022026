#include "Estudiante.cpp"

Estudiante::Estudiante() : Persona() {
}

Estudiante::Estudiante(string _cui, string _nombres, string _apellidos, string _direccion,
                       int _telefono, string _fecha_nacimiento, bool _genero,
                       string _carnet)
    : Persona(_cui, _nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento, _genero) {
}

void Estudiante::leer() {
}
