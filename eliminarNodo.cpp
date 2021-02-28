/*
	Name: Arbol Binario de Busqueda Eliminar Nodo
	Author: Pablo Alejandro Salazar Santizo 
	Instagram Personal: @pablosalazzar
	Canal Youtube: https://www.youtube.com/channel/UC4kQg80cyA7VHEV4VGKwtEA
	Date: 28/02/20 11:12
	Description: Eliminar nodo de un arbol binario
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct estructuraNodo{
	int valor;
	struct estructuraNodo *izquierda;
	struct estructuraNodo *derecha;
};

typedef struct estructuraNodo *nodo;

void insertar(int valor,nodo &raiz){
	if(raiz == NULL){
		nodo nuevo = new (struct estructuraNodo);
		nuevo->valor = valor;
		nuevo->izquierda = NULL;
		nuevo->derecha = NULL;
		raiz = nuevo;
	}else{
		if(valor > raiz->valor){
			insertar(valor,raiz->derecha);
		}else if(valor < raiz->valor){
			insertar(valor,raiz->izquierda);
		}else{
			// Numero repetido
		}
	}
}

void preorden(nodo raiz){
	if(raiz != NULL){
		cout<<raiz->valor<<", ";
		preorden(raiz->izquierda);
		preorden(raiz->derecha);
	}
}

void eliminarNodo(int dato,nodo &arbol){

}

int main(){
	
	nodo arbol = NULL;
	
	int numeros[] = {35,15,80,10,20,18,17,50,100,70,40};
	//int numeros[] = {5,3,1,2,8,7,6,9,4,10,11};
	//int numeros[] = {10,5,15,3,8,12,20,6,9,30,7};
	//int numeros[] = {50,30,70,20,35,60,80,10,25,31,40,55,65,75,100};
	
	int sizeArray = (sizeof(numeros)/sizeof(*numeros));
	
	for(int i=0 ; i < sizeArray; i++){
		insertar(numeros[i],arbol);
	}
	
	cout<<"			+---------------------------------------------+"<<endl;
	cout<<"			|   Eliminar Nodo ARbol Binario de Busqueda   |"<<endl;
	cout<<"			+---------------------------------------------+"<<endl;

	cout<<endl<<"PREORDEN : "<<endl;
	preorden(arbol);
	
	int datoEliminar = 0;
	cout<<"> Ingrese el numero a eliminar "<<endl;
	cin>>datoEliminar;
	cout<<endl;
	eliminarNodo(datoEliminar,arbol);
	cout<<endl;
	preorden(arbol);

	getch();
	return 0;
	
}
