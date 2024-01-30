#include <iostream> 
using namespace std; 

// Declara un array de caracteres con todas las letras del alfabeto
char caracter[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// Declara un array de enteros y un array de caracteres
int i,numero[10];
char c [10];

// Funci�n para generar un car�cter aleatorio
char generarcaracter()
{
	return caracter[rand()%26]; // Devuelve un car�cter aleatorio del array de caracteres
}

// Funci�n para generar un n�mero aleatorio
int generarNumero()
{
	return rand()%51; // Devuelve un n�mero aleatorio entre 0 y 50
}

// Funci�n para generar n�meros y caracteres aleatorios
void generadordeNumeros()
{
	for(int i=0; i<10; i++) // Bucle para generar 10 n�meros y caracteres
	{
		numero[i]=generarNumero(); // Genera un n�mero aleatorio y lo guarda en el array de n�meros
		char temp = generarcaracter(); // Genera un car�cter aleatorio
		
		// Bucle para verificar si el car�cter ya existe en el array de caracteres
		for(int j=0; j<i; j++)
		{
			if(c[j] == temp) // Si el car�cter ya existe
			{
				temp = generarcaracter(); // Genera un nuevo car�cter
				j = -1; // Reinicia el bucle para verificar el nuevo car�cter
			}
		}
		
		c[i] = temp; // Agrega el car�cter �nico al array de caracteres
	}
}

// Funci�n para imprimir los n�meros y caracteres generados
void imprimir ()
{
	cout<<"CAR\t NUM "<<endl; // Imprime los encabezados de las columnas
	for(int i =0;i<10;i++) // Bucle para imprimir cada car�cter y n�mero
		cout<<c[i]<<"\t"<<numero[i]<<endl; // Imprime el car�cter y el n�mero
}

// Funci�n principal
int main(int argc, char *argv[]) {
	generadordeNumeros(); // Llama a la funci�n para generar los n�meros y caracteres
	imprimir(); // Llama a la funci�n para imprimir los n�meros y caracteres
	return 0;	
}
