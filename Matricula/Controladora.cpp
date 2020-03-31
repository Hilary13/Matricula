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
			cout << "\n\n\tIngrese con un usuario de Administrador activo \n\n" << endl;
			if (Interfaz::Seguridad(1, 0, 0)) {
				system("cls");
				Interfaz::menuSeguridad();
				system("pause");
			}
			else {
				cout << "\n\n\tError en usuario o contraseña. ¡Acceso denegado! \n\n" << endl;
				system("pause");
				system("cls");
			}
			break;

		case '2':
			system("cls");
			cout << "\n\n\tIngrese con un usuario de Administrador o Registro activo \n\n" << endl;
			while (Interfaz::Seguridad(1, 3, 0)) {
				system("cls");
				Interfaz::menuMantenimientoRegistro();
				system("pause");
			}
			cout << "\n\n\tError en usuario o contraseña. ¡Acceso denegado! \n\n" << endl;
			system("pause");
			system("cls");

			break;

		case '3':
			system("cls");
			cout << "\n\n\tIngrese con un usuario de Administrador, Mantenimiento o Registro activo \n\n" << endl;
			if (Interfaz::Seguridad(1, 2, 3)) {
				system("cls");
				Interfaz::menuMantenimientoEscuela();
				system("pause");
			}
			cout << "\n\n\tError en usuario o contraseña. ¡Acceso denegado! \n\n" << endl;
			system("pause");
			system("cls");
			break;

		case '4':
			system("cls");
			cout << "\n\n\tIngrese con un usuario de Administrador, Mantenimiento o Estudiante activo \n\n" << endl;
			if (Interfaz::Seguridad(1, 2, 4)) {
				system("cls");
				Interfaz::menuMatricula();
				system("pause");
			}
			cout << "\n\n\tError en usuario o contraseña. ¡Acceso denegado! \n\n" << endl;
			system("pause");
			system("cls");
			break;

		case '5':
			system("cls");
			cout << "\n\n\tIngrese con un usuario de Administrador o Profesor activo \n\n" << endl;
			if (Interfaz::Seguridad(1, 5, 0)) {
				system("cls");
				Interfaz::menuActas();
				system("pause");
			}
			cout << "\n\n\tError en usuario o contraseña. ¡Acceso denegado! \n\n" << endl;
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
	Interfaz::usuariosPredeterminados();
	Interfaz::inicio();
	Controladora::menuPrincipal();
}
 