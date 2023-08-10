#include <iostream>
using namespace std;

template <typename T>
class NodoTC
{
    T dato;
    NodoTC<T> *siguiente;
    NodoTC<T> *anterior;

public:
    T getdato() { return this->dato; }
    void setdato(T dato) { this->dato = dato; }
    NodoTC<T> *getSiguiente() { return this->siguiente; }
    NodoTC<T> *getAnterior() { return this->anterior; }
    void setSiguiente(NodoTC<T> *siguiente) { this->siguiente = siguiente; }
    void setAnterior(NodoTC<T> *anterior) { this->anterior = anterior; }

    NodoTC<T>()
    {
        this->dato = NULL;
        this->siguiente = nullptr;
        this->anterior = nullptr;
    }
    NodoTC<T>(T dato, NodoTC<T> *siguiente, NodoTC<T> *anterior)
    {
        this->dato = dato;
        this->siguiente = siguiente;
        this->anterior = anterior;
    }
};