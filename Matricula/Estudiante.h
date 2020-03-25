#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Usuario.h"

class Estudiante :
	public Usuario
{
public:

	Estudiante();
	Estudiante(std::string, std::string, std::string, bool);

};
#endif 