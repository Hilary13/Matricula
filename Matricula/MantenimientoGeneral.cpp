#include "MantenimientoGeneral.h"
using namespace std;

MantenimientoGeneral::MantenimientoGeneral()
{
	anio = 0;
	ciclo = 0;
	fechaInicio = 0;
	fechaFinal = 0;


}

MantenimientoGeneral::MantenimientoGeneral(int anio, int ciclo, int fechaInicio, int fechaFinal)
{
	this->anio = anio;
	this->ciclo = ciclo;
	this->fechaInicio = fechaInicio;
	this->fechaFinal = fechaFinal;

}

void MantenimientoGeneral::setAnio(int anio) { this->anio = anio; }

void MantenimientoGeneral::setCiclo(int ciclo) { this->ciclo = ciclo; }

void MantenimientoGeneral::setFechaInicio(int fechaInicio) { this->fechaInicio = fechaInicio; }

void MantenimientoGeneral::setFechaFinal(int fechaIFinal) { this->fechaFinal = fechaFinal; }

int MantenimientoGeneral::getAnio() { return anio; }

int MantenimientoGeneral::getCiclo() { return ciclo; }

int MantenimientoGeneral::getFechaInicio() { return fechaInicio; }

int MantenimientoGeneral::getFechaFinal() { return fechaFinal; }

std::string MantenimientoGeneral::toStringMG()
{
	stringstream s;

	s << "Año: " << anio << endl;
	s << "Ciclo: " << ciclo << endl;
	s << "Fecha de inicio: " << fechaInicio << endl;
	s << "Fecha de finalización: " << fechaFinal << endl;

	return s.str();
}
