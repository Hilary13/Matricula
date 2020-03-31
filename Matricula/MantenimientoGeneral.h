#ifndef MANTENIMIENTOGENERAL_H
#define MANTENIMIENTOGENERAL_H
#include <iostream>
#include <sstream>
#include <string.h> 

class MantenimientoGeneral
{

private:
	
	int anio;
	int ciclo;
	int fechaInicio;
	int fechaFinal;

public:

	//no sé si hay que cambiar las fechas por string

	MantenimientoGeneral();
	MantenimientoGeneral(int, int, int, int);

	void setAnio(int);
	void setCiclo(int);
	void setFechaInicio(int);
	void setFechaFinal(int);

	int getAnio();
	int getCiclo();
	int getFechaInicio();
	int getFechaFinal();

	std::string toStringMG();

};
#endif 