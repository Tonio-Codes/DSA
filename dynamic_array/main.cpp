#include "dArray.cpp"
#include <iostream>

int main()
{
    dArray arr(4);
    arr.print();
    std::cout << std::endl;
    arr.pushBack(1);
    arr.pushBack(2);
    arr.pushBack(3);
    arr.pushBack(4);
    arr.print();

    std::cout << std::endl;

    arr.pushFront(5);
    arr.print();
    arr.remove(0);
    std::cout << std::endl;

    arr.print();
    std::cout << std::endl;
    std::cout << arr[2] << std::endl;
    return 0;
}