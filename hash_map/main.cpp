#include "hash.cpp"

int main()
{
    hashT table;
    table.insert("hello");
    table.insert("Anthony");
    table.insert("Alex");
    table.insert("Bjj");
    table.insert("school");
    table.insert("after");
    table.remove("Bjj");
    table.print();
}