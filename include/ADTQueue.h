//directiva a el preprocesador para incluir solamente una vez este header
#pragma once
//utilizar la plantilla de una clase definida en ADTLista
#include "./ADTList.h"
//utilizando plantillas para clase Queue
template <typename T>
//Clase Queue hereda de la plantilla de clases List
class Queue  :public List<T>{
public:
    //insertar un elemento al final de la cola
    void encolar(T elm){this->insertEnd(elm);}
    //recuperar y eliminar un elemento al inicio de la cola
    T desencolar(){
        //obtener el elemento al inicio de la cola
        T elm = this->getElm(0);
        //eliminar el primer elemento de la cola
        this->deleteStart();
        //retornar el primer elemento
        return elm;
    }
    //obtener el primer elemento de la cola sin eliminarlo
    T primero(){ return this->getElm(0); }
};
