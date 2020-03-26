#include "Estudiante.h"

Estudiante::Estudiante(): Usuario() {}

Estudiante::Estudiante(int id, std::string nombre, std::string clave, bool activo): Usuario(id, nombre, clave, activo) {}