/********************************************************

linked_list header 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(SINGLY_LINKED_LIST_HPP)
#define SINGLY_LINKED_LIST_HPP

// All declarations of library

template <class T>
class Node
{
public:
    T value;
    Node *next;
} __attribute__((__packed__));

template <class T>
class SinglyLinkedList
{
    int count;
    Node<T> *head;
    Node<T> *tail;

public:
    SinglyLinkedList();
    void append(T valueIn);
    int size();
    void print();
    ~SinglyLinkedList();
};
#endif // SINGLY_LINKED_LIST_HPP
