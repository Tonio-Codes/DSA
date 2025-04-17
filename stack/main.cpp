#include "stack.cpp"

int main()
{
    myStack ex_stack(2);
    ex_stack.push(1);
    ex_stack.push(2);
    ex_stack.push(3);
    ex_stack.push(4);
    ex_stack.print();

    int elem = ex_stack.pop();
    std::cout << std::endl;
    std::cout << elem << std::endl;
    ex_stack.print();
    return 0;
}