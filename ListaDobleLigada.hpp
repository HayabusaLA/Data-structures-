#include "NodoT.hpp"
template <typename T>
class ListaDobleLigada
{
    NodoT<T> *head;
    int tam;

public:
    ListaDobleLigada(){
        this->head = nullptr;
        this->tam = 0;
    }

    NodoT<T> *getHead() { return this->head;}
    void setHead(NodoT<T> *head) { return this->head = head;}
    int getTam() { return this->tam;}
    void setTam() { return this->tam = tam;}
    void agregarinicio(T Dato) 
    {
        NodoT<T> *nuevo = new NodoT<T>(Dato, this->head, nullptr); //creamos el nodo
        if (this->head)                                            
        {
            this->head->setAnterior(nuevo);
        }
        this->head = nuevo; 
        this->tam++;
    }
    void agregarfin(T Dato){ //creamos nodo
        NodoT<T> *nuevo = new NodoT<T>(Dato, nullptr, nullptr); 
        if (this->head)                                        
        {
            NodoT<T> *nodo = this->head;
            while (nodo->getSiguiente()){
                nodo = nodo->getSiguiente();
            }
            // encontramos el ultimo nodo y actualizamos
            nodo->setSiguiente(nuevo);
            nuevo->setAnterior(nodo);
        }
        this->tam++;
    }
    NodoT<T> *Buscar(T dato) 
    {
        NodoT<T> *nodo = this->head; 
        while (nodo)                
        {
            if (nodo->getdato() == dato) 
            {
                return nodo; //regresamos el nodo
            }
            nodo = nodo->getSiguiente(); //vamos modificando el nodo
        }
        return nullptr;
    }
    NodoT<T> *EliminarNodo(T dato) 
    {
        NodoT<T> *nodo = this->head; 
        while (nodo)                
        {
            if (nodo->getdato() == dato) 
            {
                if (nodo->getSiguiente() && nodo->getAnterior()) 
                {
                    nodo->getSiguiente()->setAnterior(nodo->getAnterior());
                    nodo->getAnterior()->setSiguiente(nodo->getSiguiente());
                    nodo->setSiguiente(nullptr);
                    nodo->setAnterior(nullptr);
                    this->tam--;
                    return nodo; 
                }
                else if (nodo->getSiguiente()) 
                {
                    nodo->getSiguiente()->setAnterior(nullptr);
                    this->head = nodo->getSiguiente();
                    nodo->setSiguiente(nullptr);
                    this->tam--;
                    return nodo; 
                }
                else if (nodo->getAnterior()) 
                {
                    nodo->getAnterior()->setSiguiente(nullptr);
                    nodo->setAnterior(nullptr);
                    this->tam--;
                    return nodo;
                }
            }
            nodo = nodo->getSiguiente(); 
        }
        return nullptr;
    }

    NodoT<T> *actualizarLista(T dato, T dato2) 
    {
        NodoT<T> *nodo = this->head; 
        while (nodo)                
        {
            if (nodo->getdato() == dato) 
            {
                nodo->setdato(dato2);
                return nodo; 
            }
            nodo = nodo->getSiguiente(); 
        }
        return nullptr;
    }
    void ImprimirListaDerIzq()
    {
        NodoT<T> *nodoActual = this->head;
        cout << "nullptr -> ";
        while (nodoActual->getSiguiente())
        {
            nodoActual = nodoActual->getSiguiente();
        }
        while (nodoActual)
        {
            cout << nodoActual->getdato() << " -> ";
            nodoActual = nodoActual->getAnterior();
        }
        cout << "head" << endl;
    }
    void ImprimirListaIzqDer()
    {
        NodoT<T> *nodoActual = this->head;
        cout << "head->";
        while (nodoActual)
        {
            cout << nodoActual->getdato() << "->";
            nodoActual = nodoActual->getSiguiente();
        }
        cout << "nullptr" << endl;
    }
};