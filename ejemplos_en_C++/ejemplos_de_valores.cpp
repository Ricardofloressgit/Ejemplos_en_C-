/*
Titulo :Primer ejemplos de valores tipo entero con short int 
Autor : Ricardo flores
Descripcion: PRIMER PROGRAMA PARA ANALIZAR SU ESTRUCTURA.
Fecha: 2024-01-11

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;// valores enteros con ambos signos de -2147483648 a 2147483647
	unsigned int numero_entero_s;// valores enteros del 0 a 4294967295
	float numero_decimal;
	double numero_decimal_g;
	//asignando valores limite de los tipos de datos 
	/*numero_entero_p= 32767;//<--valor limite de datos
	cout<< "Numero entero pequeño : "<<numero_entero_p<<endl;
	numero_entero_p1 = 32768;//valor fuera de rango
	cout<< "Numero entero pequeño positivo: "<<numero_entero_p1<<endl;
	*/
	numero_entero = -2147483649;//<-- valor limite de datos de 0 a 4294967295
	cout<<" Numero entero con signo: "<<numero_entero<<endl;
	numero_entero_s = 4294967297;// <-- valor limite de datos -2147483648 a 2147483647
	cout<<" Numero entero sin signo : "<<numero_entero_s<<endl;
	//Asignacion 
	
	return 0;
}

