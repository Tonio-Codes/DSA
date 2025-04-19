#include "dArray.h"
#include <iostream>
#include <cstring> 


dArray::dArray()
{
    len = 0;
    size = 1;
    arr = new int[size];
}
dArray::dArray(int capacity)
{
    size = capacity;
    len = 0;
    arr = new int[size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = 0;
    }
}

void dArray::print()
{
    for(int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

void dArray::reSize()
{
    int* tmp = new int[size*2];
    size *= 2;
    std::memcpy(tmp, arr, size * sizeof(int));
    delete[] arr;
    arr = tmp;
}

void dArray::pushBack(int val)
{
    if(len == size)
    {
        reSize();
    }
    arr[len] = val;
    ++len;
}

int dArray::getLen()
{
    return len;
}

void dArray::pushFront(int val)
{
    if(len == size)
    {
        reSize();
    }
    int tmp = 0;
    for(int i = len; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = val;
    ++len;
}

int& dArray::operator[](int idx)
{
    if(idx >= len)
    {
        throw std::out_of_range("index is out of bounds!");
    }
    return arr[idx];
}

void dArray::remove(int idx)
{

    if(idx >= len)
    {
        std::cerr << "out of range index!";

    }
    //removing the last element in the vector
    if(idx == len - 1)
    {
        arr[idx] = 0;
        --len;
        if(len <= size/3)
        {
            reduce();
        }
        return;
    }

    //removing element from any other position
    arr[idx] = 0;
    for(int i = idx; i < len; ++i)
    {
        arr[i] = arr[i+1];
    }
    --len;
    //check to see if size is 
    if(len <= size/3)
    {
        reduce();
    }
}
void dArray::reduce()
{
    int* tmp = new int[size/2];
    size /= 2;
    std::memcpy(tmp, arr, size * sizeof(int));
    delete[] arr;
    arr = tmp;
}
dArray::~dArray()
{
    delete[] arr;
}



