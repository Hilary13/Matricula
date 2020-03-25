#ifndef UREGISTRO_H
#define UREGISTRO_H

#include "Usuario.h"

class URegistro :
	public Usuario
{
public:

	URegistro();
	URegistro(std::string, std::string,std::string, bool);

};
#endif