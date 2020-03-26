#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Usuario.h"

class Estudiante :
	public Usuario
{
public:

	Estudiante();
	Estudiante(int, std::string, std::string, bool);

};
#endif 