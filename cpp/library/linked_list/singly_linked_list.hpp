/********************************************************

linked_list header 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(SINGLE_LINKED_LIST_HPP)
#define SINGLE_LINKED_LIST_HPP

// All declarations of library

template <class T>
class Node
{
public:
    T value;
    Node *next;
} __attribute__((__packed__));

template <class T>
class LinkedList
{
    T count;
    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList();
    void append(T valueIn);
    int size();
    void print();
    ~LinkedList();
};

#endif // SINGLE_LINKED_LIST_HPP
