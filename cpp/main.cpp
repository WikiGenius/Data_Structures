#include "library/linked_list/singly_linked_list.hpp"
#include <iostream>
int main(int argc, char const *argv[])
{
    SinglyLinkedList<int> l;
    l.append(2);
    l.append(4);
    l.append(3);
    l.append(7);
    l.print();
    std::cout << l.size() << std::endl;
    return 0;
}