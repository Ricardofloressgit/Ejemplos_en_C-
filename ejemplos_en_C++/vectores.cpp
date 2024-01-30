#include <iostream> 
using namespace std; 

// Declara un array de caracteres con todas las letras del alfabeto
char caracter[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// Declara un array de enteros y un array de caracteres
int i,numero[10];
char c [10];

// Función para generar un carácter aleatorio
char generarcaracter()
{
	return caracter[rand()%26]; // Devuelve un carácter aleatorio del array de caracteres
}

// Función para generar un número aleatorio
int generarNumero()
{
	return rand()%51; // Devuelve un número aleatorio entre 0 y 50
}

// Función para generar números y caracteres aleatorios
void generadordeNumeros()
{
	for(int i=0; i<10; i++) // Bucle para generar 10 números y caracteres
	{
		numero[i]=generarNumero(); // Genera un número aleatorio y lo guarda en el array de números
		char temp = generarcaracter(); // Genera un carácter aleatorio
		
		// Bucle para verificar si el carácter ya existe en el array de caracteres
		for(int j=0; j<i; j++)
		{
			if(c[j] == temp) // Si el carácter ya existe
			{
				temp = generarcaracter(); // Genera un nuevo carácter
				j = -1; // Reinicia el bucle para verificar el nuevo carácter
			}
		}
		
		c[i] = temp; // Agrega el carácter único al array de caracteres
	}
}

// Función para imprimir los números y caracteres generados
void imprimir ()
{
	cout<<"CAR\t NUM "<<endl; // Imprime los encabezados de las columnas
	for(int i =0;i<10;i++) // Bucle para imprimir cada carácter y número
		cout<<c[i]<<"\t"<<numero[i]<<endl; // Imprime el carácter y el número
}

// Función principal
int main(int argc, char *argv[]) {
	generadordeNumeros(); // Llama a la función para generar los números y caracteres
	imprimir(); // Llama a la función para imprimir los números y caracteres
	return 0;	
}
