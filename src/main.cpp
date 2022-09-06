// incluir el header del template de una clase
#include "../include/ADTStack.h"
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int opt,  subOpt, elm, index;
    List<int> lista;
    do{
    cout << "================================================================================" <<endl;
    cout << "                                     MENU                                       " <<endl;
    cout << "================================================================================" <<endl;
    cout << " 1. Insertar"<<endl;
    cout << " 2. Suprimir"<<endl;
    cout << " 3. Eliminar duplicados"<<endl;
    cout << " 4. Recuperar un elemento"<<endl;
    cout << " 5. Recuperar sucesor"<<endl;
    cout << " 6. Recuperar predecesor"<<endl;
    cout << " 7. Mostrar lista"<<endl;
    cout << " 8. Salir"<<endl;
    cout << " Ingrese una opcion: ";
    cin >> opt;
    cout << endl;

    switch(opt){
        case 1:
            cout << " 1. Insertar al inicio"<<endl;
            cout << " 2. Insertar al final"<< endl;;
            cout << " (1/2): ";
            cin  >> subOpt;
            cout << endl;
            cout << "Elemento a insertar: ";
            cin >> elm;
            if(subOpt ==1){
                lista.insertStart(elm);
            } else{
                lista.insertEnd(elm);
            }
            break;
        case 2:
            cout << " 1. Suprimir al inicio"<<endl;
            cout << " 2. Suprimir al final"<<endl;
            cout << " (1/2): ";
            cin  >> subOpt;
            cout << endl;
            if(subOpt ==1){
                lista.deleteStart();
            } else{
                lista.deleteEnd();
            }
            break;
        case 3:
            lista.deleteDuplicates();
            break;
        case 4:
            cout << "Digite el indice: ";
            cin >> index;
            cout << endl;
            cout << lista.getElm(index) << endl;
            break;
        case 5:
            cout << "Digite el elemento: ";
            cin >> elm;
            cout << endl;
            cout << lista.getNext(elm) << endl;
            break;
        case 6:
            cout << "Digite el elemento: ";
            cin >> elm;
            cout << endl;
            cout << lista.getPrev(elm) << endl;
            break;
        case 7:
            lista.printList();
            break;
        case 8:
            cout << "Saliendo" << endl;
            break;
    }
    }while(opt!=8);

}
