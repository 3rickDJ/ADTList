//directiva a el preprocesador para incluir solamente una vez este header
#pragma once
//incluir la libreria iostream
#include <iostream>
//definiendo el maximo de elemento en el arreglo
#define MAX 10
//utilizando estos metodos
using std::cout;
using std::endl;

//usando templates
template<typename T>

//declarando clase list
class List {
    protected:
    int LastElm;
    //Lista de tipo T, con un maximo de MAX elementos
    T lista[MAX];
    // metodos que utilizan los metodos publicos
    // recorrer los elementos del arreglo a la derecha
    // empezando desde el inicio del arreglo hasta el ultimo elemento
    bool shiftRight(){
        if(isFull()){
            //si esta llena mandar falso
            cout << "Error: full List" << endl;
            return false;
        }else{
            //si esta disponible
            //recorrer los elementos
            if(!isEmpty()){
                // ciclar desde el ultimo elemento hasta el primero
                for (int i = LastElm-1; i >=0; i--)
                    //mover el elemento
                    lista[i+1] = lista[i];
            }
            return true;
        }
    }
    //recorrer elementos hacia la izquierda
    //empezando de un indice hasta el final
    bool shiftLeft(int index){
        if(!isEmpty() && validIndex(index)){
            //si no esta vacia y es un indice valido
            //recorrer todos los elementos desde index hasta el elemento final
            for (int i = index; i <=LastElm-2; i++)
                //mover un elemento hacia atras
                lista[i]=lista[i+1];
            return true;
        }else{
            //mandar error en la lista
            cout << "Error: empty List or wrong index" << endl;
            return false;
        }
    }
    //indice valido, retorna true si es valido, false de otra forma
    bool validIndex(int index){
        //el indice se encuentra entre 0 y LastElm-1
        //indice valido
        if(index<LastElm && index>=0){
            return true;
        }
        return false;
    }

    // metodos publicos
    public:
    List(){
        LastElm = 0;
    }
    // La lista esta vacia
    // si LastElm == 0 -> lista vacia
    bool isEmpty(){return LastElm == 0;}
    // La lista esta llena
    // si LastElm == MAX -> lista llena
    bool isFull(){return LastElm ==MAX;}
    // si LastElm == MAX -> lista llena
    //eliminar un elemento dada una posicion
    void deleteElm(int position){
        // verificar si es posible recorrer los elementos a la izquierda dada
        // una posicion, decrementar el indice al ultimo elemento
        if(shiftLeft(position)){ LastElm = LastElm - 1; }
    }
    // eliminar elemento del final
    // eliminar elemento en LastElm-1
    void deleteEnd(){ deleteElm(LastElm - 1); }
    // eliminar elemento del inicio
    // eliminar elemento en posicion 0
    void deleteStart(){deleteElm(0); }
    // insertar elemento al final de la lista
    void insertEnd( T elm){
        if(isFull()){
            //si esta llena, mandar error
            cout << "Error: full List" << endl;
        }else{
            //guardar elm al final de la lista
            lista[LastElm] = elm ;
            //aumentar el indice al ultimo elemento
            LastElm  = LastElm + 1;
        }
    }
    // insertar elemento al inicio
    void insertStart(T elm){
        // si shiftRight retorna true
        if(shiftRight()){
            //ingresar elm a la primera posicion de la lista
            lista[0] = elm;
            // decrementar indice al ultimo elemento en lista
            LastElm = LastElm + 1;
        }
    }
    // obtener elemento al final de la lista
    T getEnd(){
        if(isEmpty()){
            //marcar error si esta vacia la lista
            cout << "Error: empty List" << endl;
            // retornar falso, un valor nulo
            return 0;
        }else{
            //Decrementar indice, y apuntar al ultimo elemento
            LastElm = LastElm - 1;
            //retornar ultimo elemento de la lista
            return lista[LastElm];
        }
    }
    // Eliminar duplicados
    void deleteDuplicates(){
        //aun no se implementa
        cout << "Not implemented" << endl;
    }
    // obtener elemento en un indice
    T getElm(int index ){
        if(isEmpty()){
            //si esta vacia la lista, mandar error
            cout << "Error: empty List" << endl;
            return false;
        }
        if(!(validIndex(index))){
            // si no es un indice valido, mandar falso
            cout << "Error: invalid index"<<endl;
            return false;
        }
        //retornar elemento en el indice determinado
        return lista[index];
    }
    //encontrar un elemento
    int find(T elm){
        //recorrer la lista en busqueda del primer elemento coincidente
        for (int i = 0; i<LastElm; i++){
            //retornar el indice del elemento encontrado
            if(elm == lista[i]){ return i;}
        }
        //si no fue encontrado
        //retornar un indice invalido
        cout << "Item not found"<< endl;
        return -1;
    }
    //obtener el elemento despues de la primera coincidencia de elm
    T getNext(T elm){
        //buscar indice del elemento
        int index =find(elm);
        //si el find no lo encontro, retornar -1
        if(index==-1){return false;}
        //si find lo encontro buscar el siguiente elemento
        index = index + 1;
        //retornar el siguiente elemento
        return getElm(index);
    }
    // obtener el elemento previo a la primera coincidencia de elm
    T getPrev(T elm){
        //buscar el indice de elm
        int index = find(elm);
        //si no fue econtrado, retornar falso
        if(index==-1){return false;}
        //decrementar el indice al indice previo
        index = index - 1 ;
        //retornar elemento anterior a elm
        return getElm(index);
        }
    //imprimir lista
    void printList(){
        if(!isEmpty()){
            //si la lista no esta llena
            cout << LastElm << " elements of list are:" <<endl;
            cout << "*****************" <<endl;
            //imprimir cada elemento en lista
            //desde el primero al ultimo
            for (int i = 0; i <= LastElm-1; i++)
                cout << lista[i] << endl;
            cout << "*****************" <<endl;
        }else {
            //error, lista vacia
            cout << "Empty List"<<endl;
        }
    }
};
