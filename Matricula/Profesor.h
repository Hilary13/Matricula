#ifndef PROFESOR_H
#define PROFESOR_H

#include "Usuario.h"

class Profesor :
	public Usuario
{
public:

	Profesor();
	Profesor(int, std::string, std::string, bool);

};
#endif