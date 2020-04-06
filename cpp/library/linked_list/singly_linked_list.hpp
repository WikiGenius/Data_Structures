/********************************************************

singly linked list header file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(SINGLY_LINKED_LIST_HPP)
#define SINGLY_LINKED_LIST_HPP
#include <vector>
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
private:
    int count;
    Node<T> *head;
    Node<T> *tail;

public:
    SinglyLinkedList();                                     // space O(1)   time O(1)
    void append(T valueIn);                                 // space O(1)   time O(1)
    void prepend(T valueIn);                                // space O(1)   time O(1)
    void insert(int pos, T valueIn);                        // space O(1) time O(n)
    int search(T valueIn);                                  //space O(1) time O(n)
    T pop_back();                                           //space O(1) time O(n)
    T pop_forward();                                        //space O(1) time O(1)
    void remove(T valueIn);                                 //space O(1) time O(n)
    void reverse();                                         //space O(n) time O(n)
    std::vector<T> to_vector();                             //space O(n) time O(n)
    int size();                                             //space O(1) time O(1)
    void print();                                           //space O(1) time O(n)
    void clear();                                           // space O(1)   time O(n)
    ~SinglyLinkedList();                                    // space O(1)   time O(n)
    void operator=(const SinglyLinkedList<T> &linked_list); // space O(1)   time O(1)
    template <class m>
    friend bool iscircular(const SinglyLinkedList<m> &linked_list); // space O(1)   time O(n)
    template <class m>
    friend void make_loop_test(const SinglyLinkedList<m> &linked_list); // space O(1)   time O(1
} __attribute__((__packed__));

#endif // SINGLY_LINKED_LIST_HPP
