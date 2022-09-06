// MENU PARA UTILIZAR LA COLA, compilarlo con g++ -o main.exe src/main3.cpp
// incluir el header del template de una clase
#include "../include/ADTQueue.h"
//usando plantilla de clase cola
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int opt,  subOpt, elm, index;
    //declarando objeto cola
    Queue<int> cola;
    do{
        //menu
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
    //segun opcion hacer
    switch(opt){
        case 1:
            //leer elemento y encolarlo
            cout << "Elemento a insertar: ";
            cin >> elm;
            cout << endl;
            cola.encolar(elm);
            break;
        case 2:
            //desencolar elemento e imprimirlo
            cout << cola.desencolar() << endl;
            break;
        case 3:
            //obtener el primer elemento en la cola, o el siguente elemento
            cout << cola.primero() << endl;
            break;
        case 4:
            //imprimir la colar
            cola.printList();
            break;
        case 5:
            cout << "Saliendo" << endl;
            break;
    }
    //opcion para salir
    }while(opt!=5);

}
