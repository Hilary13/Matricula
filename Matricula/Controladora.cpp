#include "Controladora.h"

void Controladora::menuPrincipal()
{
	system("cls");
	char entrar;
	do {
		cout << " \n";
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                        MENU                       |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       |  1. Seguridad y administración de roles           |" << endl;
		cout << "       |  2. Mantenimiento General a nivel de registro     |" << endl;
		cout << "       |  3. Mantenimiento por Escuela                     |" << endl;
		cout << "       |  4. Matricula e historiales                       |" << endl;
		cout << "       |  5. Registro de actas                             |" << endl;
		cout << "       |  6. Salir                                         |" << endl;
		cout << "       |                                                   |" << endl;
		cout << "       +---------------------------------------------------+" << endl;
		cout << "       Opcion: ";
		cin >> entrar;
		switch (entrar) {

		case '1':
			system("cls");
			Interfaz::menuSeguridad();
			system("pause");
			system("cls");
			break;

		case '2':
			system("cls");
			Interfaz::menuMantenimientoRegistro();
			system("pause");
			system("cls");
			break;

		case '3':
			system("cls");
			Interfaz::menuMantenimientoEscuela();
			system("pause");
			system("cls");
			break;

		case '4':
			system("cls");
			Interfaz::menuMatricula();
			system("pause");
			system("cls");
			break;

		case '5':
			system("cls");
			Interfaz::menuActas();
			system("pause");
			system("cls");
			break;
			
		case '6':
			cout << " \n";
			cout << "       Saliendo del programa \n";
			cout << " \n";
			system("pause");
			exit(1);

			break;
		default:
			cout << " \n";
			cout << "       La opcion digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");
			break;
		}
	} while (entrar > 6);
}

void Controladora::inicio()
{
	Interfaz::inicio();
	Controladora::menuPrincipal();
}
