//*******************************************
//Universidad Nacional						
//Programadores:							
//Luis Masis Bogantes - 702590608
//Hilary Granados Alvarez - 117030578
//Grupo: 05
//Profesor: Karol Leitón
//Version: 1.0.0
//*******************************************
//Derechos Reservados
//Legislacion
//*******************************************

#include "Controladora.h"

using namespace std;

int main() {

	setlocale(LC_CTYPE, "Spanish");
	//::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	Controladora* c = new Controladora();
	c->inicio();

	system("pause");
	return 0;
}