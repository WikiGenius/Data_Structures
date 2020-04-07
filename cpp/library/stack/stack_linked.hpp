/********************************************************

stack header file using linked list concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/
#if !defined(STACK_LINKED_HPP)
#define STACK_LINKED_HPP
// All declarations of library
#include <vector>
#include "../basic_structures/node.hpp"

template <class T>
class Stack_L
{
private:
    Node<T> *head;
    int num_elements;

public:
    Stack_L();                  //space O(1)    time O(1)
    void push(T data);          //space O(1)    time O(1)
    int size();                 //space O(1)    time O(1)
    bool is_empty();            //space O(1)    time O(1)
    T pop();                    //space O(1)    time O(1)
    std::vector<T> get_stack(); //space O(n)    time O(n)
    void clear();               //space O(1)    time O(n)
    ~Stack_L();                 //space O(1)    time O(n)
};

#endif // STACK_LINKED_HPP