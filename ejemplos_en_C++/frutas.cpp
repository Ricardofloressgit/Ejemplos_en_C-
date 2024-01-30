#include <iostream>
using namespace std;
string frutas[] = {"manzana", "plátano", "naranja", "fresa", "kiwi", "mango", "piña", "uva", "cereza", "melón"};//array con sus dimenciones 
string productos[]={"jugo","Ensalada","Frapé","tarta","helado","mermelada","batido","asado","coctel"};//array con sus dimenciones 
string fruta[5];//array con la cantidad que se mostrara en pantalla 
string preparado[5];//array con la cantidad que se mostrara en pantalla 
//FUNCION GENERAR FRUTAS
string generarfrutas()
{
	return frutas[rand()%10]; // GENERA UN NUMERO ALEATORIO EN ESTE CASO DE 0 A 10
}
//FUNCION GENERAR PREPARADO
string generarpreparado()
{
	return productos[rand()%10];// GENERA UN NUMERO ALEATORIO EN ESTE CASO DE 0 A 10
}
//FUNCION GENERAR
void generar()
{ //CICLO PARA GENERAR LOS NOMBRES DE LOS PRODUCTOS Y FRUTAS
	for(int i=0; i<5; i++)
	{
		fruta[i]=generarfrutas();
		preparado[i]=generarpreparado();	
	}
}
//FUNCION GENERAR IMPRIMIR
void imprimir ()
{ //IMPRIME LA CONCATENACION DE AMBOS VECTORES SEPARADOS SEGUN EL ORDEN ALEATORIO GENERADO
	cout<<"MENU DE PRODUCTOS "<<endl;
	for(int i =0;i<5;i++)
		cout<<preparado[i]<<" de "<<fruta[i]<<endl;
}
int main(int argc, char *argv[]) {
	generar();
	imprimir();	
	return 0;
}

