#ifndef QUEUE_H 
#define QUEUE_H

#include "C:\Users\antho\OneDrive\Desktop\c++ tings\DSA\dynamic_array\dArray.cpp"

class myQueue { 
    private:
        dArray my_q;

    public:
        myQueue() = default;
        bool empty();
        int peek();
        int dequeue();
        int size();
        void enqueue(int val);
        void print();
};




#endif