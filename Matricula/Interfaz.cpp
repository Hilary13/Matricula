#include "Interfaz.h"
#include "Controladora.h"

//------------------------VARIABLES GLOBALES---------------------
int contAux = 0;


//--------------------------------------------------------------------


//---------------------VALIDACIONES-------------------------------------

string Interfaz::leerString()
{
	char chain[100];
	cin.getline(chain, 99);
	stringstream s;
	s << chain;
	int size = s.str().length();

	if (size == 0 || s.str()[0] == 32) {
		if (contAux > 0) {
			cout << "texto incorrecto, por favor ingreselo nuevamente: ";
		}
		contAux++;
		return leerString();
	}
	contAux = 0;
	return s.str();
}

void Interfaz::color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



//-----------------------------------------------------------------------------


//----------------------------MENUS-----------------------------------------


void Interfaz::bienvenido()
{
	for (int i = 0; i < 3; i++) { cout << "\n"; }
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	color(13);
	cout << "  ¡ B i e n v e n i d o s ! \n";
	for (int i = 0; i < 1; i++) { cout << "\n"; }
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	color(15);
	cout << "   SISTEMA DE MATRÍCULA \n";
	for (int i = 0; i < 2; i++) { cout << "\n"; }
	color(13);
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << " ________      __     __      \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|   _____|    |  |   |  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|  |____      |  |___|  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|   ____|     |   ___   |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|  |          |  |   |  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|__|          |__|   |__|     \n";
	for (int i = 0; i < 1; i++) { cout << "\n"; }
	for (int i = 0; i < 4; i++) { cout << "\t"; }
	cout << "   No es mucho pero es trabajo honesto \n";

	color(15);
	cout << "\n\n\n";
	cout << "\t\t\t\t      [Pulse ";
	color(10);
	cout << " ENTER ";
	color(15);
	cout << " para continuar ] ";
	cin.clear();
	cin.get();
	cout << "\n\n\t\t\t\t\t\tCargando...\n" << endl;
	cout << "\t\t\t";
	for (int i = 0; i < 60; i++) {
		color(255);
		cout << " ";
		Sleep(7);
	}
	color(15);
}

void Interfaz::inicio()
{
	Interfaz::bienvenido();
}

void Interfaz::menuSeguridad()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |         Seguridad y Administración de roles       |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Crear usuario                                 |" << endl;
		cout << "       |  2. Mostrar usuarios                              |" << endl;
		cout << "       |  3. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//crear usuario
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//mostrar los usuarios
			system("pause");
			system("cls");
			break;

		case '3':

			system("cls");
			Controladora::menuPrincipal();
			system("pause");
			system("cls");

			break;

		default:
			cout << " \n";
			cout << "       La opción digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");
			break;
		}
	} while (entrar > 3);

}

void Interfaz::menuMantenimientoRegistro()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |      Mantenimiento General a nivel de registro    |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Mantenimiento de años y ciclos lectivos       |" << endl;
		cout << "       |  2. Mantenimiento de carreras y cursos            |" << endl;
		cout << "       |  3. Empadronamiento                               |" << endl;
		cout << "       |  4. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//Mantenimiento de años y ciclos lectivos 
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//Mantenimiento de carreras y cursos
			system("pause");
			system("cls");
			break;

		case '3':
			system("cls");
			//empadronamiento
			system("pause");
			system("cls");
			break;

		case '4':

			system("cls");
			Controladora::menuPrincipal();
			system("pause");
			system("cls");

			break;

		default:
			cout << " \n";
			cout << "       La opción digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");
			break;
		}
	} while (entrar > 4);

}

void Interfaz::menuMantenimientoEscuela()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |              Mantenimiento por Escuela            |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Consulta de Plan de Estudios por Carrera      |" << endl;
		cout << "       |  2. Creación de Grupos                            |" << endl;
		cout << "       |  3. Consulta General de Matricula                 |" << endl;
		cout << "       |  4. Ingreso de Profesores                         |" << endl;
		cout << "       |  5. Mostrar de profesores                         |" << endl;
		cout << "       |  6. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//Mantenimiento de años y ciclos lectivos 
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//Mantenimiento de carreras y cursos
			system("pause");
			system("cls");
			break;

		case '3':
			system("cls");
			//empadronamiento
			system("pause");
			system("cls");
			break;

		case '4':
			system("cls");
			//empadronamiento
			system("pause");
			system("cls");
			break;

		case '5':
			system("cls");
			//empadronamiento
			system("pause");
			system("cls");
			break;

		case '6':

			system("cls");
			Controladora::menuPrincipal();
			system("pause");
			system("cls");

			break;

		default:
			cout << " \n";
			cout << "       La opción digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");
			break;
		}
	} while (entrar > 6);

	
}

void Interfaz::menuMatricula()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |               Matrícula e historiales             |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Proceso de Matricula                          |" << endl;
		cout << "       |  2. Consulta de matricula por Estudiante          |" << endl;
		cout << "       |  3. Consulta de matricula por Estudiante          |" << endl;
		cout << "       |  4. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//Mantenimiento de años y ciclos lectivos 
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//Mantenimiento de carreras y cursos
			system("pause");
			system("cls");
			break;

		case '3':
			system("cls");
			//empadronamiento
			system("pause");
			system("cls");

			break;

		case '4':

			system("cls");
			Controladora::menuPrincipal();
			system("pause");
			system("cls");

			break;


		default:
			cout << " \n";
			cout << "       La opción digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");

			break;
		}
	} while (entrar > 4);


}

void Interfaz::menuActas()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                  Registro de actas                |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Ingresar notas                                |" << endl;
		cout << "       |  2. Visualizar notas                              |" << endl;
		cout << "       |  3. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//Mantenimiento de años y ciclos lectivos 
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//Mantenimiento de carreras y cursos
			system("pause");
			system("cls");
			break;

		case '3':
			system("cls");
			Controladora::menuPrincipal();
			system("pause");
			system("cls");

			break;

		default:
			cout << " \n";
			cout << "       La opción digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");

			break;
		}
	} while (entrar > 3);

}



//-----------------------------------------------------------------------------

