// incluir el header del template de una clase
#include "../include/ADTStack.h"
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int opt,  subOpt, elm, index;
    //declarar obgeto pila
    Stack<int> pila;
    do{
    cout << "================================================================================" <<endl;
    cout << "                                     MENU                                       " <<endl;
    cout << "================================================================================" <<endl;
    cout << " 1. Push"<<endl;
    cout << " 2. Pop"<<endl;
    cout << " 3. Obtener ultimo elemento"<<endl;
    cout << " 4. Mostrar lista"<<endl;
    cout << " 5. Salir"<<endl;
    cout << " Ingrese una opcion: ";
    //obtener opcion
    cin >> opt;
    cout << endl;
    //segun opcion hacer
    switch(opt){
        case 1:
            cout << "Elemento a insertar: ";
            //obtener elemento a insertar
            cin >> elm;
            cout << endl;
            //insertar al final
            pila.push(elm);
            break;
        case 2:
            //eliminar del final
            cout << pila.pop() << endl;
            break;
        case 3:
            //obtener el ultimo elemento
            cout << pila.last() << endl;
            break;
        case 4:
            //imprir lista
            pila.printList();
            break;
        case 5:
            cout << "Saliendo" << endl;
            break;
    }
    }while(opt!=5);

}
