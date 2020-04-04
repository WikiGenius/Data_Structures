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
    void prepend(T valueIn);
    void insert(int pos, T valueIn);
    void search(T valueIn);
    void remove(T valueIn);
    void pop();
    void to_vector();
    int size();
    void print();
    ~SinglyLinkedList();
};
// friend functions
template <class T>
void reverse(SinglyLinkedList<T> linked_list);
template <class T>
bool iscircular(SinglyLinkedList<T> linked_list);
#endif // SINGLY_LINKED_LIST_HPP
