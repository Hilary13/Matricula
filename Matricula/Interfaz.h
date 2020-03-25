#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
#include <Windows.h>
using namespace std;

class Interfaz
{
public:

	//-------------------VALIDACIONES------------------
	static string leerString();
	static void color(int);



	//----------------------MENUS--------------------------------------
	static void bienvenido();
	static void inicio();
	static void menuSeguridad();
	static void menuMantenimientoRegistro();
	static void menuMantenimientoEscuela();
	static void menuMatricula();
	static void menuActas();

	//---------------------------------------------------------------






};
#endif