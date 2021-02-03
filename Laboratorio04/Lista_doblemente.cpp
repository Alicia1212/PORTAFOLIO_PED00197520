#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;

void insertarNodo();
void buscarNodo();
void eliminarNodo();
void desplegarListaPU();

int main(){

	int opcion_menu=0;
	do
	{
		cout << "\n|------------------| ";
		cout << "\n|   LISTA DOBLE    | ";
		cout << "\n|------------------| ";
		cout << "\n| 1. Insertar      | ";
		cout << "\n| 2. Buscar        | ";
		cout << "\n| 3. Eliminar      | ";
		cout << "\n| 4. Desplegar P.U | ";
		cout << "\n|------------------| ";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
			cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
			insertarNodo();
			break;
		case 2:
			cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
			buscarNodo();
			break;
		case 3:
			cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
			eliminarNodo();
			break;
		case 4:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n";
			desplegarListaPU();
			break;
		
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 7);	
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del Nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				
				cout << "\n Nodo Eliminado";
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void desplegarListaPU(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		
		while(actual!=NULL){
			cout << "\n " << actual->dato; 
			actual = actual->siguiente;
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
