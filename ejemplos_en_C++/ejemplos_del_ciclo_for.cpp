/*Titulo :practica con for
	Autor : Ricardo flores
	Descripcion: ejemplos con ciclo for.
	Fecha: 2024-01-15
	
	*/
	
#include <iostream>
using namespace std;
	/* datos de inicio del programa
MENU:
1: Opci�n uno
2: opci�n dos
3: salir
	*/
//lo mismo con do while
int main(int argc, char *argv[]) 
{
	int opcion ;
	/*cout<< "MENU"<<endl;
	cout<< "opcion uno";
	cout<< "opcion dos";
	cout<< "salir";
	while(opcion != 0){
		cout<< "MENU"<<endl;
		cout<< "opcion uno"<<endl;
		cout<< "opcion dos"<<endl;
		cout<< "salir"<<endl;
		cin>>opcion;
		switch (opcion){
		case 1: cout<<"Eligio la opcion 1 "<<endl;
		break;
		case 2: cout<<"Eligio la opcion  2 "<<endl;
		break;
		case 0: cout<<"Eligio la opcion1 salir "<<endl;
		break;	
		default: cout<<"no escogio ninguna opcion "<<endl;
		}
	}
	*/
	do {
		cout << "MENU" << endl;
		cout << "1: Opci�n uno" << endl;
		cout << "2: Opci�n dos" << endl;
		cout << "0: Salir" << endl;
		
		cout << "Ingrese su opci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:cout << "Eligi� la opci�n 1" << endl;
		break;
		case 2:cout << "Eligi� la opci�n 2" << endl;
		break;
		case 0:cout << "Eligi� salir" << endl;
		break;
		default:cout << "Opci�n no v�lida" << endl;
		
		
	} while (opcion != 0);
	
	return 0;
}
