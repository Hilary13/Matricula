#include "Usuario.h"

Usuario::Usuario()
{
}

Usuario::Usuario(int id, std::string nombre, std::string clave, bool activo)
{
	this->id = id;
	this->nombre = nombre;
	this->clave = clave;
	this->activo = activo;
}



int Usuario::getID() { return id; }

std::string Usuario::getNombre() { return nombre; }

std::string Usuario::getClave() { return clave; }

bool Usuario::getActivo() { return activo; }

void Usuario::setId(int id) { this->id = id; }

void Usuario::setNombre(std::string nombre) { this->nombre = nombre; }

void Usuario::setClave(std::string clave) { this->clave = clave; }

void Usuario::setActivo(bool activo) { this -> activo = activo; }
