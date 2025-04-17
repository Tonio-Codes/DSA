#include "stack.h"

int myStack::pop()
{
    int elem = arr[arr.getLen() - 1];
    arr.remove(arr.getLen() - 1);
    return elem;
}

void myStack::push(int val)
{
    arr.pushBack(val);
}

bool myStack::empty()
{
   return arr.getLen() == 0;
}

int myStack::peek()
{
    return arr[arr.getLen() - 1];
}

int myStack::size()
{
    return arr.getLen();
}

void myStack::print()
{
    arr.print();
}

