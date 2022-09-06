#include "../include/ADTList.h"

using std::cout;
using std::endl;
int main()
{
    List<int> lista;
    cout << lista.isEmpty() << endl;
    cout << lista.isFull()<< endl;
    lista.insertStart(1);
    lista.insertStart(2);
    lista.insertStart(3);
    lista.insertStart(4);
    lista.insertEnd(5);
    lista.printList();
    lista.insertStart(6);
    lista.deleteElm(0);
    lista.insertEnd(0);
    lista.printList();
    lista.deleteDuplicates();
    cout << lista.getEnd() << endl;
    cout << lista.getElm(1) << endl;
    cout << lista.find(2) << endl;
    cout << lista.getNext(2) << endl;
    cout << lista.getPrev(2) << endl;
    lista.printList();
   return 0;
}
