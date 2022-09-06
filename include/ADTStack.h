#pragma once
#include "./ADTList.h"
template <typename T>
class Stack  :public List<T>{
public:
    void push(T elm){ this->insertEnd(elm);}
    T pop(){ return this->getEnd(); }
    T last(){ return this->getElm( this->LastElm - 1); }
};
