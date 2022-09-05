#include "./ADTList.h"
template <typename T>
class Stack  :public List<T>{
    void push(T elm){        this->insertEnd(elm);}
    T pop(){ this->getEnd(); }
    T last(){ this->getElm( this->LastElm - 1);
    }
};
