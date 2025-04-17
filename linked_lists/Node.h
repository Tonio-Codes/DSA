#ifndef NODE_H
#define NODE_H

#include <string>


class Node {
    private:
        std::string value;
        Node* next;
    public:
        Node(): next(nullptr) {};
        Node(Node* next, const std::string& val): next(next), value(val) {}
        std::string getValue(){return value;}
        void setNext(Node* ptr) {next = ptr;}
        Node* getNext() {return next;}
        void setValue(std::string& val) {value = val;}
};

#endif