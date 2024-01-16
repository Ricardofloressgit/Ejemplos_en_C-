/*
Titulo :practica con switch
Autor : Ricardo flores
Descripcion: ejemplos con switch.
Fecha: 2024-01-15

*/

#include <iostream>
#include <cctype>// es necesario para utilizar tolower
using namespace std;

int main(int argc, char *argv[]) 
{
	char caracter,minuscula;
	cout<<"Ingresea una letra: ";
	cin>> caracter;
	//buscar la funcion para convertir en minuscula un caracter
	minuscula=tolower(caracter);//tolower es la funsion que convierte en minuscula un caracter
	switch(minuscula)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':cout<<"es vocal";
	break;	
	default: cout<<"no es vocal";
	
	};
	return 0;
}

