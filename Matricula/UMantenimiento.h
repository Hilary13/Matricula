#ifndef UMANTENIMIENTO_H
#define UMANTENIMIENTO_H

#include "Usuario.h"
class UMantenimiento :
	public Usuario
{
public:

	UMantenimiento();
	UMantenimiento(int, std::string, std::string, bool);

};
#endif