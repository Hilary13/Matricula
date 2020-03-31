#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>
#include "Usuario.h"
#include "Administrador.h"
#include "UMantenimiento.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "URegistro.h"
#include "Lista.h"

using namespace std;

class Interfaz
{

private:

	static string read();

public:

	//-------------------VALIDACIONES------------------
	static string leerString();
	static int leerInt();
	static int validateInt(int);
	static void validarLetras(); //queda por hacer la validacion
	static void color(int);
	static bool Seguridad(int, int, int);


	//----------------------MENUS--------------------------------------
	static void bienvenido();
	static void inicio();
	static void menuSeguridad();
	static void menuMantenimientoRegistro();
	static void menuMantenimientoEscuela();
	static void menuMatricula();
	static void menuActas();
	static void menuMantenimientoAnios();

	//---------------------------------------------------------------

	//---------------------------Usuarios--------------------------
	static void usuariosPredeterminados();
	static void crearUsuario();





};
#endif