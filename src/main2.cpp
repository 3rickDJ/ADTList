#include "../include/ADTStack.h"
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
int showMenu(){
    int option;
    cout << "================================================================================" <<endl;
    cout << "                                     MENU                                       " <<endl;
    cout << "================================================================================" <<endl;
    cout << " 1. Push"<<endl;
    cout << " 2. Pop"<<endl;
    cout << " 3. Obtener ultimo elemento"<<endl;
    cout << " 4. Mostrar lista"<<endl;
    cout << " 5. Salir"<<endl;
    cout << " Ingrese una opcion: ";
    cin >> option;
    cout << endl;
    return option;
}
int cases(int choice){
    switch(choice){
        case 1:
            cout << " 1. Insertar al inicio"<<endl;
            cout << " 2. Insertar al final"<<endl;
            cin  >> choice;
            if(choice ==1){

            } else{
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            cout << "Saliendo" << endl;
            break;
    }
    return choice;
}
int mainNofinal(){
    int choice;
    do{
        choice = showMenu();
        cases(choice);
    }while(choice != 7);
    return 0;
}
int main(){
    int opt,  subOpt, elm, index;
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
    cin >> opt;
    cout << endl;

    switch(opt){
        case 1:
            cout << "Elemento a insertar: ";
            cin >> elm;
            cout << endl;
            pila.push(elm);
            break;
        case 2:
            pila.pop();
            break;
        case 3:
            cout << pila.last() << endl;
            break;
        case 4:
            pila.printList();
            break;
        case 5:
            cout << "Saliendo" << endl;
            break;
    }
    }while(opt!=5);

}
