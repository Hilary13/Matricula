#include "Estudiante.h"

Estudiante::Estudiante() { Usuario(); }

Estudiante::Estudiante(std::string id, std::string nombre, std::string clave, bool activo)
{
	Usuario(id, nombre, clave, activo);
}