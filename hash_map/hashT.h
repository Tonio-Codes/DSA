#ifndef HASHT_H
#define HASHT_H

#include <vector>
#include "C:\Users\antho\OneDrive\Desktop\c++ tings\DSA\linked_lists\linked_list.cpp"
#include <functional>

class hashT {
    private:
        std::vector<linked_list> h_table;
        std::hash<std::string> hash_fn;
    
    public:
        hashT() {h_table.resize(6);}
        void insert(const std::string& value);
        bool in_table(const std::string& v);
        void get(const std::string& v);
        void remove(const std::string& v);
        int size();
        void print();





};


#endif