#include "library/library.hpp"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    const int N = 5000;
    SinglyLinkedList<int> l;
    for (size_t i = 0; i < N; i++)
    {
        l.append(i + 1);
    }
    l.print();
    cout << sizeof(Node<int>) << endl;
    std::cout << l.size() << std::endl;
    return 0;
}