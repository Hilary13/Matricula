#include "URegistro.h"

URegistro::URegistro() { Usuario(); }

URegistro::URegistro(std::string id, std::string nombre, std::string clave, bool activo)
{
	Usuario(id, nombre, clave, activo);
}
