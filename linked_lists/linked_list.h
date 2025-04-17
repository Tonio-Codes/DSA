#ifndef linked_list_H
#define linked_list_H

#include "Node.h"
#include <iostream>

class linked_list {
    private:
    Node* head;
    int size; 
    void insertHead(Node* node);
    void insertLast(Node* node);

    public:
    linked_list(): head(nullptr), size(0) {}
    linked_list(Node* head) :head(head) {size = 1;}
    void insert(Node* node, int pos);
    bool isEmpty();
    Node* getFirst();
    Node* getLast();
    Node* getNode(std::string value);
    void remove(std::string value);
    void print();
    int getSize();
    ~linked_list();
};
#endif