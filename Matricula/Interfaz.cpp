#include "Interfaz.h"
#include "Controladora.h"
#define ENTER 13 
#define BACKSPACE 8

//------------------------VARIABLES GLOBALES---------------------
int contAux = 0;
Usuario* usuario;
Lista<Usuario>* L1 = new Lista<Usuario>; //Lista general de Usuarios

//--------------------------------------------------------------------


//---------------------VALIDACIONES-------------------------------------

string Interfaz::read()
{
	char chain[100];

	cin.getline(chain, 99);

	stringstream s;

	s << chain;

	int size = s.str().length();

	return s.str();
}

string Interfaz::leerString()
{
	char chain[100];

	cin.getline(chain, 99);

	stringstream s;

	s << chain;

	int size = s.str().length();

	if (size == 0 || s.str()[0] == 32) {
		if (contAux > 0) {
			cout << "Texto incorrecto, por favor ingréselo nuevamente: ";
		}
		contAux++;
		return leerString();
	}
	contAux = 0;
	return s.str();
}

int Interfaz::leerInt()
{
	string reading = read();
	int convert;

	stringstream r;

	r << reading;

	if (!(r >> convert)) {

		cout << " Número inválido, por favor ingreselo de nuevo: " << endl;
		return leerInt();
	}
	return convert;
}

int Interfaz::validateInt(int n)
{
	bool t;
	int reading = leerInt();

	stringstream s;

	int aux = n + 1;

	s << reading;

	if (reading > 0 && reading < aux) { t = true; }
	else { t = false; }

	s >> reading;

	if (!t) {

		cout << "Solo valores entre 1 y " << n << ": " << endl;
		return validateInt(n);
	}
	return reading;
}

void Interfaz::color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

bool Interfaz::Seguridad(int a, int b, int c)
{
	int sId = 0;
	std::string sNombre, sPass = "";
	char caracter;
	std::cout << "\n";
	std::cout << "\t\t\t+---------------+" << endl;
	std::cout << "\t\t\t| Login Usuario |" << endl;
	std::cout << "\t\t\t+---------------+" << endl;
	std::cout << "\n\tID: ";
	sId = leerInt();
	std::cout << "\n\tContraseña: ";
	caracter = _getch();
	sPass = "";
	while (caracter != ENTER) {
		if (caracter != BACKSPACE) {
			sPass.push_back(caracter);
			std::cout << "*";
		}
		else {
			if (sPass.length() > 0) {
				std::cout << "\b \b";
				sPass = sPass.substr(0, sPass.length() - 1);
			}
		}
		caracter = _getch();
	}
	Usuario* usuarioSeguridadA = new  Usuario(sId, sNombre, sPass, true, a);
	Usuario* usuarioSeguridadB = new  Usuario(sId, sNombre, sPass, true, b);
	Usuario* usuarioSeguridadC = new  Usuario(sId, sNombre, sPass, true, c);
	return (L1->buscar(usuarioSeguridadA) || L1->buscar(usuarioSeguridadB) || L1->buscar(usuarioSeguridadC));
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
			Interfaz::crearUsuario();
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
		cout << "       Opción: ";
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
		cout << "       Opción: ";
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
		cout << "       Opción: ";
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
		cout << "       Opción: ";
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

void Interfaz::menuMantenimientoAnios()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |       Mantenimiento de años y ciclos lectivos     |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Ver ciclos lectivos                           |" << endl;
		cout << "       |  2. Ingresar ciclos lectivos                      |" << endl;
		cout << "       |  3. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       Opción: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			//ver ciclos lectivos
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			//ingresar los ciclos lectivos
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
	} while (entrar > 4);
	
}

void Interfaz::usuariosPredeterminados()
{

	Usuario* a1 = new Usuario(702590608, "Felipe", "mabo", true, 1);
	Usuario* a2 = new Usuario(117030578, "Hilary", "admin", true, 1);
	L1->insertarInicio(a1);
	L1->insertarInicio(a2);	
}

void Interfaz::crearUsuario()
{
	cout << " \n";
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                    Crear Usuario                  |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       |     Ingrese el ID de la persona:                  |" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       ID:  ";
	int id = Interfaz::leerInt();
	system("cls");

	cout << " \n";
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                    Crear Usuario                  |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       |     Ingrese el nombre completo de la persona:     |" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       Nombre:  ";
	string nombre = Interfaz::leerString();  //arreglar la validacion, acepta numeros
	system("cls");

	cout << " \n";
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                    Crear Usuario                  |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       |     Ingrese la contraseña de la persona:          |" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       Contraseña:  ";
	string pass = Interfaz::leerString();  //arreglar la validacion de numeros mayusculas y letras
	system("cls");


	int op;
	cout << " \n";
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                    Crear Usuario                  |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       |     Elegir rol de la persona                      |" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       |      1. Administrador                             |" << endl;
	cout << "       |      2. Mantenimiento (Escuela)                   |" << endl;
	cout << "       |      3. Registro                                  |" << endl;
	cout << "       |      4. Estudiante                                |" << endl;
	cout << "       |      5. Profesor                                  |" << endl;
	cout << "       |                                                   |" << endl;
	cout << "       +---------------------------------------------------+" << endl;
	cout << "       Opción:  ";
	cin >> op;

	system("cls");
	usuario = new  Usuario(id, nombre, pass, true, op);
	L1->insertarInicio(usuario);
	cout << "\n\tUsuario ingresado correctamente" << endl;
	std::cout << "\tUsuario: " << std::endl;
	std::cout << usuario->toString() << "\n\n" << std::endl;
	system("pause");
	system("cls");
	Interfaz::menuSeguridad();
}




//-----------------------------------------------------------------------------

