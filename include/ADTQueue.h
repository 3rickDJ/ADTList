#pragma once
#include "./ADTList.h"
template <typename T>
class Queue  :public List<T>{
public:
    void encolar(T elm){        this->insertEnd(elm);}
    T desencolar(){
        T elm = this->getElm(0);
        this->deleteStart();
        return elm;
    }
    T primero(){ return this->getElm(0); }
};
