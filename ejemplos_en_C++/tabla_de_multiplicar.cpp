
//ejercicio en clases
#include <iostream>
using namespace std:
int main() 

{
	// Declarar la variable para almacenar el número ingresado por el usuario
	int numero;
	
	// Solicitar al usuario que ingrese un número
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	// Imprimir la tabla de multiplicar utilizando un bucle for
	cout << "Tabla de multiplicar de " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		cout << numero << " x " << i << " = " << (numero * i) << "\n";
	}
	
	return 0;
}
