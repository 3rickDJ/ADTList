//directiva a el preprocesador para incluir solamente una vez este header
#pragma once
//utilizar la plantilla de una clase definida en ADTLista
#include "./ADTList.h"
//utilizando plantillas para clase Stack
template <typename T>
//Clase Stack hereda de la plantilla de clases List
class Stack  :public List<T>{
public:

    //insertar al final de la pila el elemento elm
    void push(T elm){ this->insertEnd(elm);}
    //recuperar el elemento al final de la pila y eliminarlo
    T pop(){ return this->getEnd(); }
    //obtener sin eliminar el elemento al final de la pila
    //pasar un indice de LastElm menos 1,
    //porque siempre LastElm apunta una casilla adelante
    T last(){ return this->getElm( this->LastElm - 1); }
};
