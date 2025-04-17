#include "queue.cpp"

int main()
{
    myQueue ex_queue;
    ex_queue.enqueue(1);
    ex_queue.enqueue(2);
    ex_queue.enqueue(3);
    ex_queue.enqueue(4);
    ex_queue.print();
    std::cout << std::endl;

    int elem = ex_queue.dequeue();
    std::cout << std::endl;
    std::cout << elem << std::endl;
    ex_queue.print();
}