#include "NodoTC.hpp"

template <typename T>
class ListaDobleLigadaCircular
{
    NodoTC<T> *last;
    int tam;

public:
    ListaDobleLigadaCircular()
    {
        this->last = nullptr;
        this->tam = 0;
    }

    NodoTC<T> *getLast() { return this->last; }
    void setLast(NodoTC<T> *last) { return this->Last = last; }
    int getTam() { return this->tam; }
    void setTam() { return this->tam = tam; }

    void agregarinicio(T Dato) // O(1)
    {
        if (this->last) // O(1)
        {
            // se crea un nuevo nodo y se actualizan los nodos existentes
            NodoTC<T> *nuevo = new NodoTC<T>(Dato, this->last->getSiguiente(), this->last);
            this->last->getSiguiente()->setAnterior(nuevo);
            this->last->setSiguiente(nuevo);
        }
        else // 
        {
            // se crea un nuevo nodo y se inserta en la lista
            NodoTC<T> *nuevo = new NodoTC<T>(Dato, nullptr, nullptr);
            this->last = nuevo;
            this->last->setAnterior(nuevo);
            this->last->setSiguiente(nuevo);
        }
        this->tam++;
    }
    void agregarFin(T Dato) 
    {
        if (this->last) 
        {
            
            NodoTC<T> *nuevo = new NodoTC<T>(Dato, this->last->getSiguiente(), this->last);
            this->last->getSiguiente()->setAnterior(nuevo);
            this->last->setSiguiente(nuevo);
            this->last = nuevo;
        }
        else 
        {
           
            NodoTC<T> *nuevo = new NodoTC<T>(Dato, nullptr, nullptr);
            this->last = nuevo;
            this->last->setAnterior(nuevo);
            this->last->setSiguiente(nuevo);
        }
        this->tam++;
    }
    NodoTC<T> *Buscar(T dato)
    {
        NodoTC<T> *nodo = this->last; 
        if (nodo->getdato() == dato)  
        {
            return nodo;
        }
        nodo = nodo->getSiguiente();
        while (nodo != this->last) 
        {
            {
                if (nodo->getdato() == dato) 
                    return nodo;
            }
            nodo = nodo->getSiguiente(); 
        }
        return nullptr;
    }
    NodoTC<T> *ElminarNodo(T dato) 
    {
        NodoTC<T> *nodo = this->last; 
        if (nodo->getdato() == dato)  
        {
            
            nodo->getSiguiente()->setAnterior(nodo->getAnterior());
            nodo->getAnterior()->setSiguiente(nodo->getSiguiente());
            this->last = nodo->getAnterior();
            nodo->setSiguiente(nullptr);
            nodo->setAnterior(nullptr);
            return nodo;
        }
        nodo = nodo->getSiguiente();
        while (nodo != this->last) 
        {
            if (nodo->getdato() == dato) 
            {
                nodo->getSiguiente()->setAnterior(nodo->getAnterior());
                nodo->getAnterior()->setSiguiente(nodo->getSiguiente());
                nodo->setSiguiente(nullptr);
                nodo->setAnterior(nullptr);
                return nodo;
            }
            nodo = nodo->getSiguiente(); 
        }
        return nullptr;
    }
    NodoTC<T> *actualizarNodo(T dato, T dato2) 
    {
        NodoTC<T> *nodo = this->last; 
        if (nodo->getdato() == dato)  
        {
            nodo->setdato(dato2);
            return nodo;
        }
        nodo = nodo->getSiguiente(); 
        while (nodo != this->last)   
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
    void imprimirListaCircularDoblementeLigadaInFi()
    {
        if (this->last)
        {
            NodoTC<T> *nodo = this->last->getSiguiente();
            cout << "Comienzo de la lista: ";
            do
            {
                cout << nodo->getdato() << " -> ";
                nodo = nodo->getSiguiente();
            } while (nodo != this->last->getSiguiente());
        }
        cout << endl;
    }
    void imprimirListaCircularDoblementeLigadaFiIn()
    {
        if (this->last)
        {
            NodoTC<T> *nodo = this->last;
            cout << "Terminacion de la lista: ";
            do
            {
                cout << nodo->getdato() << "<-";
                nodo = nodo->getAnterior();
            } while (nodo != this->last);
        }
        cout << endl;
    }
};