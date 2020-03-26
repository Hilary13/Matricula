#include "Administrador.h"

Administrador::Administrador(): Usuario() { }

Administrador::Administrador(int id, std::string nombre, std::string clave, bool activo): Usuario(id, nombre, clave, activo) { }
