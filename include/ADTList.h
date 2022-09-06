#pragma once
#include <iostream>
#define MAX 10
using std::cout;
using std::endl;

template<typename T>

class List {
    protected:
    int LastElm;
    T lista[MAX];
    bool shiftRight(){
        if(isFull()){
            cout << "Error: full List" << endl;
            return false;
        }else{
            if(!isEmpty()){
                for (int i = LastElm-1; i >=0; i--)
                    lista[i+1] = lista[i];
            }
            return true;
        }

    }
    bool shiftLeft(int index){
        if(!isEmpty() && validIndex(index)){
            for (int i = index; i <=LastElm-2; i++)
                lista[i]=lista[i+1];
            return true;
        }else{
            cout << "Error: empty List" << endl;
            return false;
        }
    }
    bool validIndex(int index){
        if(index<LastElm && index>=0){
            return true;
        }
        return false;
    }

    public:
    List(){
        LastElm = 0;
    }
    bool isEmpty(){return LastElm == 0;}
    bool isFull(){return LastElm ==MAX;}
    void deleteElm(int position){
        if(shiftLeft(position)){ LastElm = LastElm - 1; }
    }
    void deleteEnd(){ deleteElm(LastElm - 1); }
    void deleteStart(){deleteElm(0); }
    void insertEnd( T elm){
        if(isFull()){
            cout << "Error: full List" << endl;
        }else{
            lista[LastElm] = elm ;
            LastElm  = LastElm + 1;
        }
    }
    void insertStart(T elm){
        if(shiftRight()){
            lista[0] = elm;
            LastElm = LastElm + 1;
        }
    }
    T getEnd(){
        if(isEmpty()){
            cout << "Error: empty List" << endl;
            return 0;
        }else{
            LastElm = LastElm - 1;
            return lista[LastElm];
        }
    }
    void deleteDuplicates(){
        cout << "Not implemented" << endl;
    }
    T getElm(int index ){
        if(isEmpty()){
            cout << "Error: empty List" << endl;
            return -1;
        }
        if(!(validIndex(index))){
            cout << "Error: invalid index"<<endl;
            return -1;
        }
        return lista[index];
    }
    int find(T elm){
        for (int i = 0; i<LastElm; i++){
            if(elm == lista[i]){ return i;}
        }
        cout << "Item not found"<< endl;
        return -1;
    }
    T getNext(T elm){
        int index = find(elm) + 1;
        if(validIndex(index)){
            return lista[index];
        }
        return -1;
    }
    T getPrev(T elm){
        int index = find(elm) - 1 ;
        if(validIndex(index)){
            return lista[index];
        }
        return 0;
        }
    void printList(){
        if(!isEmpty()){
            cout << LastElm << " elements of list are:" <<endl;
            cout << "*****************" <<endl;
            for (int i = 0; i <= LastElm-1; i++)
                cout << lista[i] << endl;
            cout << "*****************" <<endl;
        }else {
            cout << "Empty List"<<endl;
        }
    }
};
