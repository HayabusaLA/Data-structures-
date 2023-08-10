
#include "ListaDobleLigadaCircular.hpp"
#include "ListaDobleLigada.hpp"
#include <string.h>

using namespace std;

int main()
{
ListaDobleLigada<int> *ListaPrueba = new ListaDobleLigada<int>(); //comenzamos agregando los valores 
  cout << "************* Lista doblemente ligada *************" << endl;
    ListaPrueba->agregarinicio(5);
    ListaPrueba->agregarinicio(4);
    ListaPrueba->agregarinicio(3);
    ListaPrueba->agregarfin(10);
    ListaPrueba->ImprimirListaIzqDer();
    ListaPrueba->ImprimirListaDerIzq();
   
    if (ListaPrueba->Buscar(2)){ //buscamos los datos
        cout << "- El valor si esta en la lista" << endl;
    }
    else{
        cout << "- El valor no esta en la lista" << endl;
    }
    // quitamos un nodo
    if (ListaPrueba->EliminarNodo(4)){
        cout << "- El valor ha sido eliminado" << endl;
    }
    else{
        cout << "- El valor no esta en la lista" << endl;
    }
    ListaPrueba->ImprimirListaIzqDer();
    ListaPrueba->ImprimirListaDerIzq();
    // actualizamos
    if (ListaPrueba->actualizarLista(10, 6))
    {
        cout << "- El valor fue reemplazado" << endl;
    }
    else
    {
        cout << "- El valor no se reemplazado" << endl;
    }
    ListaPrueba->ImprimirListaIzqDer();
    ListaPrueba->ImprimirListaDerIzq();

    cout << "*\n************ Lista doblemente ligada circular *************" << endl;
  ListaDobleLigadaCircular<string> *ListaPrueba2 = new ListaDobleLigadaCircular<string>();
    ListaPrueba2->agregarinicio("TEC");
    ListaPrueba2->agregarinicio("CEM");
    ListaPrueba2->agregarFin("ZCT");
    ListaPrueba2->agregarFin("CDM");
    ListaPrueba2->imprimirListaCircularDoblementeLigadaInFi();
    ListaPrueba2->imprimirListaCircularDoblementeLigadaFiIn();
    // buscar un dato
    if (ListaPrueba2->Buscar("CCM"))
    {
        cout << "- El valor si está en la lista" << endl;
    }
    else
    {
        cout << "- El valor no esta en la lista" << endl;
    }
    // Eliminar un nodo
    if (ListaPrueba2->ElminarNodo("ZCT"))
    {
        cout << "- El valor ha sido eliminado" << endl;
    }
    else
    {
        cout << "- El valor no está en la lista" << endl;
    }
    ListaPrueba2->imprimirListaCircularDoblementeLigadaInFi();
    ListaPrueba2->imprimirListaCircularDoblementeLigadaFiIn();
    // actualizar el nodo de un valor
    if (ListaPrueba2->actualizarNodo("CEM", "CASA"))
    {
        cout << "- El valor ha sido reemplazado" << endl;
    }
    else
    {
        cout << "- El valor no pudo ser reemplazado" << endl;
    }
    ListaPrueba2->imprimirListaCircularDoblementeLigadaInFi();
    ListaPrueba2->imprimirListaCircularDoblementeLigadaFiIn();
}