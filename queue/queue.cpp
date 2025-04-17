#include "queue.h"

bool myQueue::empty()
{
    return my_q.getLen() == 0;
}
int myQueue::peek()
{
    return my_q[0];
}
int myQueue::dequeue()
{
    int elem = my_q[0];
    my_q.remove(0);
    return elem;
}
int myQueue::size()
{
    return my_q.getLen();
}
void myQueue::enqueue(int val)
{
    my_q.pushBack(val);
}

void myQueue::print()
{
    my_q.print();
}