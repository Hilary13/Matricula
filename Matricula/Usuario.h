#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>

class Usuario
{
	std::string id;
	std::string nombre;
	std::string clave;
	bool activo;

public:
	
	Usuario();
	Usuario(std::string, std::string, std::string, bool);

	std::string getID();
	std::string getNombre();
	std::string getClave();
	bool getActivo();
	void setId(std::string);
	void setNombre(std::string);
	void setClave(std::string);
	void setActivo(bool);
};
#endif
