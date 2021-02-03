#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *ant;
    nodo *sig;
};

class ListaSimple{
    private:
        nodo *pInicio;
    public:
        ListaSimple(){
            pInicio = NULL;
        }
        ~ListaSimple(){
            nodo *s;
            while(pInicio){
                s = pInicio;
                pInicio = pInicio->sig;
                delete s;
            }
        }
        void insertar_Final(int);
        void mostrar_Lista();
        void eliminar_Elemento(int);
        void eliminar_ElementoRecurrente(int);
        void mostrar_ListaPar();
        void mostrar_ListaImpar();

};

void ListaSimple::insertar_Final(int dato){
    nodo *n = new nodo;
    n->dato = dato;
    n->sig = NULL;
    if(!pInicio){
        pInicio = n;
    }
    else{
        nodo *s = pInicio;
        while(s->sig){
            s = s->sig;
        }
        s->sig = n;
    }
}

void ListaSimple::mostrar_Lista(){
    nodo *p = pInicio;
    while(p){
        cout << p->dato << ' ';
        p = p->sig;
    }
    cout << endl << endl;
}

void ListaSimple::eliminar_Elemento(int datoB){
    if(!pInicio)
        return;
    else{
        nodo *s = pInicio, *p;

        if(s->dato == datoB){
            pInicio = pInicio->sig;
            delete s;
        }
        else{
            while(s->sig && s->sig->dato != datoB)
                s = s-> sig;
            if(!s->sig)
                return;
            else{
                p = s->sig;
                s->sig = s->sig->sig;
                delete p;
            }
        }
    }
}

void ListaSimple::eliminar_ElementoRecurrente(int datoB){
    nodo *p = pInicio;
    while(p){
        if(p->dato == datoB)
            eliminar_Elemento(datoB);
        p = p->sig;
    }
}

void ListaSimple::mostrar_ListaPar(){
    nodo *p = pInicio;
    while(p){
        if(p->dato % 2 == 0)
            cout << p->dato << ' ';
        p = p->sig;
    }
    cout << endl << endl;
}

void ListaSimple::mostrar_ListaImpar(){
    nodo *p = pInicio;
    while(p){
        if(p->dato % 2 != 0)
            cout << p->dato << ' ';
        p = p->sig;
    }
    cout << endl << endl;
}

int main(void){
    cout << endl << endl;

    ListaSimple objLista;

    cout << "Eliminar la misma recurrencia de un dato." << endl;
    objLista.insertar_Final(9);
    objLista.insertar_Final(6);
    objLista.insertar_Final(9);
    cout << "\tNumeros Iniciales:" << endl << "\t";
    objLista.mostrar_Lista();

    cout << "\tNumero a eliminar: 9" << endl;
    objLista.eliminar_ElementoRecurrente(9);

    cout << "\tNumeros Finales:" << endl << "\t";
    objLista.mostrar_Lista(); 

    objLista.eliminar_Elemento(6);

    cout << "Numeros pares de la lista." << endl;
    for(int i=0; i<10; i++)
        objLista.insertar_Final(i);

    cout << "\tNumeros Pares:" << endl << "\t";
    objLista.mostrar_ListaPar();

    cout << "Numeros impares de la lista." << endl;

    cout << "\tNumeros Impares:" << endl << "\t";
    objLista.mostrar_ListaImpar();

    cout << endl;
    return 0;
}