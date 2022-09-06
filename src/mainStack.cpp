#include "../include/ADTStack.h"
#include <string>
using std::cout;
using std::endl;
int main()
{
    Stack<std::string> stack;
    stack.push("Hola mundo");
    stack.push("Que pasho");
    stack.push("Puro verbo");
    stack.printList();
    cout << stack.pop() << endl;
    stack.printList();

    Stack<int> pila;
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);
    pila.push(6);
    pila.printList();
    cout << pila.last() << endl;
    cout << pila.pop() << endl;
    pila.printList();
   return 0;
}
