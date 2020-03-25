#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Usuario.h"

class Administrador :
	public Usuario
{
public:
	Administrador();
	Administrador(std::string, std::string, std::string, bool); 


};
#endif