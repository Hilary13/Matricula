#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>

class Usuario
{
	int id;
	std::string nombre;
	std::string clave;
	bool activo = true;
	int rol;

public:

	Usuario();
	Usuario(int, std::string, std::string, bool, int);

	int getID();
	std::string getNombre();
	std::string getClave();
	bool getActivo();
	void setId(int);
	void setNombre(std::string);
	void setClave(std::string);
	void setActivo(bool);
	std::string toString()const;
	bool operator==(const Usuario&);
};
std::ostream& operator<<(std::ostream&, const Usuario&);

#endif
