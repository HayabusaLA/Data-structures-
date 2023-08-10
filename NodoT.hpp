#include <iostream>
using namespace std;

template <typename T>
class NodoT
{
    T dato;
    NodoT<T> *siguiente;
    NodoT<T> *anterior;

public:
    T getdato() { return this->dato; }
    void setdato(T dato) { this->dato = dato; }
    NodoT<T> *getSiguiente() { return this->siguiente; }
    NodoT<T> *getAnterior() { return this->anterior; }
    void setSiguiente(NodoT<T> *siguiente) { this->siguiente = siguiente; }
    void setAnterior(NodoT<T> *anterior) { this->anterior = anterior; }

    NodoT<T>()
    {
        this->dato = NULL;
        this->siguiente = nullptr;
        this->anterior = nullptr;
    }
    NodoT<T>(T dato, NodoT<T> *siguiente, NodoT<T> *anterior)
    {
        this->dato = dato;
        this->siguiente = siguiente;
        this->anterior = anterior;
    }
};