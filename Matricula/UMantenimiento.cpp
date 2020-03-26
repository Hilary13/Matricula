#include "UMantenimiento.h"

//Usuario mantenimiento

UMantenimiento::UMantenimiento() : Usuario() {}

UMantenimiento::UMantenimiento(int id, std::string nombre, std::string clave, bool activo) : Usuario(id, nombre, clave, activo) {}
