#include "Administrador.h"

Administrador::Administrador() { Usuario(); }

Administrador::Administrador(std::string id, std::string nombre, std::string clave, bool activo)
{
	Usuario(id, nombre, clave, activo);
}
