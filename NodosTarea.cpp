#include <iostream>
#include <conio.h>
using namespace std;

struct nodo {
	int valor;
	struct nodo *ptr;
	struct nodo *inicio;
	struct nodo *nodo;
	struct nodo *aux;
	
};

nodo=new struct nodo ptr;

int main ()
{
	
	inicio = nodo;
	inicio->ptr = NULL;
	inicio->valor = 10;
	nodo = new struct nodo;
	inicio->ptr = nodo;
	inicio->ptr->ptr = NULL;
	inicio->ptr->valor = 20;
	
	inicio->valor;
	cout << "Valor 10" <<inicio->valor;
	cout << "Valor 20" <<inicio->ptr->valor;
	return 0;
}

//crear inicio.
//auxiliar  crer un nodo 
// funcion que imprima con aux hasta que no encuentre el null deja de imrprimir
//funcion que elimine nodo

