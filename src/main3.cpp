#include "../include/ADTQueue.h"
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int opt,  subOpt, elm, index;
    Queue<int> cola;
    do{
    cout << "================================================================================" <<endl;
    cout << "                                     MENU                                       " <<endl;
    cout << "================================================================================" <<endl;
    cout << " 1. Encolar"<<endl;
    cout << " 2. Desencolar"<<endl;
    cout << " 3. Obtener primero"<<endl;
    cout << " 4. Mostrar lista"<<endl;
    cout << " 5. Salir"<<endl;
    cout << " Ingrese una opcion: ";
    cin >> opt;
    cout << endl;

    switch(opt){
        case 1:
            cout << "Elemento a insertar: ";
            cin >> elm;
            cout << endl;
            cola.encolar(elm);
            break;
        case 2:
            cout << cola.desencolar() << endl;
            break;
        case 3:
            cout << cola.primero() << endl;
            break;
        case 4:
            cola.printList();
            break;
        case 5:
            cout << "Saliendo" << endl;
            break;
    }
    }while(opt!=5);

}
