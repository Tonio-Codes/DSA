#include "linked_list.h"
using namespace std;

void linked_list::print()
{
    Node* curr = head;
    while(curr != nullptr)
    {
        if(curr->getNext() == nullptr)
        {
            cout << curr->getValue();
            curr = curr->getNext();
            continue;
        }
        cout << curr->getValue() << " --> ";
        curr = curr->getNext();
    }
}
void linked_list::insert(Node* node, int pos)
{
    if(pos == 1)
    {
        insertHead(node);
        ++size;
        return;
    }
    if(pos == (size + 1)) 
    {
        insertLast(node);
        ++size;
        return;
    }
    //inserting in the middle
    Node* curr = head;
    Node* tmp = nullptr;
    int currPos(1);
    while(curr != nullptr)
    {
        currPos++;
        tmp = curr;
        curr = curr->getNext();
        if(currPos == pos)
        {
            tmp->setNext(node);
            node->setNext(curr);
        }
    }
    ++size;
}
void linked_list::insertLast(Node* node)
{
    Node* curr = head;
    while(curr != nullptr)
    {
        if(curr->getNext() == nullptr)
        {
            curr->setNext(node);
            return;
        }
        curr = curr->getNext();
    }
    ++size;
}
void linked_list::insertHead(Node* node)
{
    Node* tmp = head;
    head = node;
    head->setNext(tmp);
}

bool linked_list::isEmpty()
{
    return head == nullptr;
}
Node* linked_list::getFirst()
{
    return head;
}
Node* linked_list::getLast()
{
    if (size == 0)
    {
        return nullptr;
    }

    Node* curr = head;
    while(curr!= nullptr)
    {
        if(curr->getNext() == nullptr)
        {
            return curr;
        }
    }
    return nullptr;
}
Node* linked_list::getNode(std::string value)
{
    Node* curr = head;
    while(curr!= head)
    {
        if(curr->getValue() == value)
        {
            return curr;
        }
        curr = curr->getNext();
    }
    return nullptr;
}
void linked_list::remove(std::string value)
{
    //delete head of the list
    if(head->getValue() == value)
    {
        Node* tmp = head->getNext();
        Node* tmp2 = head;
        delete tmp2;
        head = tmp;
        --size;
        return;
    }
    Node* curr = head;
    Node* tmp = nullptr;
    
    while(curr != nullptr)
    {
        tmp = curr;
        curr = curr->getNext();
        if(curr->getValue() == value)
        {
            //node with matching key is last in the linked list
            if(curr->getNext() == nullptr)
            {
                delete curr;
                tmp->setNext(nullptr);
                --size;
                return;
            }

            //node with matching key is in the middle of the list
            tmp->setNext(curr->getNext());
            delete curr;
            --size;
            return;
        }
    }
    cerr << "no node with that key was found in the list!" << endl;
    
}

int linked_list::getSize()
{
    return size;
}

linked_list::~linked_list()
{
    Node* tmp = nullptr;
    Node* curr = head;
    while(curr != nullptr)
    {
        tmp = curr;
        curr = curr->getNext();
        delete tmp;
    }
}
