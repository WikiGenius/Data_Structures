/********************************************************

queue header file using linked list concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/
#if !defined(QUEUE_LINKED_HPP)
#define QUEUE_LINKED_HPP
// All declarations of library
#include <vector>
#include "../basic_structures/node.hpp"

template <class T>
class Queue_L
{
private:
    Node<T> *head;
    Node<T> *tail;
    int num_elements;

public:
    Queue_L();                  //space O(1)    time O(1)
    void enqueue(T data);       //space O(1)    time O(1)
    int size();                 //space O(1)    time O(1)
    bool is_empty();            //space O(1)    time O(1)
    T front();                  //space O(1)    time O(1)
    T dequeue();                //space O(1)    time O(1)
    std::vector<T> get_queue(); //space O(n)    time O(n)
    void clear();               //space O(1)    time O(n)
    ~Queue_L();                 //space O(1)    time O(n)
};

#endif // QUEUE_LINKED_HPP