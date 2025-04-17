#ifndef STACK_H
#define STACK_H

#include "C:\Users\antho\OneDrive\Desktop\c++ tings\DSA\dynamic_array\dArray.cpp"

class myStack {
    private:
    dArray arr;
    
    public:
    myStack() = default;
    int pop();
    void push(int val);
    bool empty();
    int peek();
    int size();
    void print();
};

#endif