/*
Titulo :primer programa con comentarios 
Autor : Ricardo Flores Soruco
Descripcion: PRIMER PROGRAMA PARA ANALIZAR SU ESTRUCTURA.
Fecha: 2024-01-10

*/

# include <iostream >//inclusion de la libreria de entrada y salida.
using namespace std;// el uso de espacio de nombre para STD de la I/O

int main()//funcion principal main para retornar un entero.
{
	int numero;//declaracion de la variable numero como entero.
	
	numero = 5+5 ;// Asignacion de la suma de 5+5 a la variable numero.
	/*La función cout permite imprimir cadenas de texto y valores almacenados en variables.
	se utiliza el signo de puntuacion doble << posteriormente se ingresa la variable que se quiere mostrar en pantalla
	de esa manera se esta solicitando imprimir la variable.
	*/
	cout << "El valor de numero es: " << numero<<endl;
	return 0;// Retorno de 0 para finalizar el programa.
}
