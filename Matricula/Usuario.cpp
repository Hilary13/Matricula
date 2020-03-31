#include "Usuario.h"

Usuario::Usuario()
{
	id = 0;
	nombre = "";
	clave = "";
	activo = true;
	rol = 0;
}

Usuario::Usuario(int id, std::string nombre, std::string clave, bool activo, int rol)
{
	this->id = id;
	this->nombre = nombre;
	this->clave = clave;
	this->activo = activo;
	this->rol = rol;
}

int Usuario::getID() { return id; }

std::string Usuario::getNombre() { return nombre; }

std::string Usuario::getClave() { return clave; }

bool Usuario::getActivo() { return activo; }

void Usuario::setId(int id) { this->id = id; }

void Usuario::setNombre(std::string nombre) { this->nombre = nombre; }

void Usuario::setClave(std::string clave) { this->clave = clave; }

void Usuario::setActivo(bool activo) { this->activo = activo; }

std::string Usuario::toString() const
{
	std::stringstream s;
	s << "\n\t+---------------------------------+" << std::endl;
	s << "\tID:  " << id << std::endl;
	s << "\tNombre:  " << nombre << std::endl;
	switch (rol)
	{
	case 1:
		s << "\tRol:  " << "Administrador" << std::endl;
		break;
	case 2:
		s << "\tRol:  " << "Mantenimiento" << std::endl;
		break;
	case 3:
		s << "\tRol:  " << "Registro" << std::endl;
		break;
	case 4:
		s << "\tRol:  " << "Estudiante" << std::endl;
		break;
	case 5:
		s << "\tRol:  " << "Profesor" << std::endl;
		break;
	default:
		s << "\tRol:  " << "* Error *" << std::endl;
	}
	switch (activo) {
	case true:
		s << "\tEstado: " << "Activo" << std::endl;
		break;
	case false:
		s << "\tEstado: " << "Inactivo" << std::endl;
		break;
	default:
		s << "\tRol:  " << "* Error *" << std::endl;
	}
	s << "\t+---------------------------------+" << std::endl;
	return s.str();
}

bool  Usuario::operator==(const Usuario& aux)
{
	if (id == aux.id && clave == aux.clave && rol == aux.rol && activo == aux.activo) { return true; }
	else { return  false; }
}

std::ostream& operator<<(std::ostream& salida, const Usuario& u)
{
	salida << u.toString();
	return salida;
}