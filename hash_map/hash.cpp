#include "hashT.h"

void hashT::insert(const std::string& val)
{
    size_t idx = hash_fn(val) % h_table.size();
    Node* tmp = new Node(nullptr,val);
    h_table[idx].insert(tmp, h_table[idx].getSize() + 1);
}
bool hashT::in_table(const std::string& k)
{
    size_t idx = hash_fn(k) % h_table.size();
    return h_table[idx].getNode(k)->getValue() == k;

}
void hashT::remove(const std::string& k)
{
    size_t idx = hash_fn(k) % h_table.size();
    h_table[idx].remove(k);
}

void hashT::print()
{
    size_t size = h_table.size();

    for(int i = 0; i < size; ++i)
    {
        cout << i << ": ";
        h_table[i].print();
        cout << endl;
    }
}
int hashT::size()
{
    return h_table.size();
}