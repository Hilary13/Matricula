#include "Profesor.h"

Profesor::Profesor() { Usuario(); }

Profesor::Profesor(std::string id, std::string nombre, std::string clave, bool activo)
{
	Usuario(id, nombre, clave, activo);
}
