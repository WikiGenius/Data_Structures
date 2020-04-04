#include "singly_linked_list.hpp"

#include <iostream>
template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
    head = NULL;
    tail = NULL;
    count = 0;
}
template <class T>
void SinglyLinkedList<T>::append(T valueIn)
{
    // space O(1)   time O(1)
    this->count += 1;
    Node<T> *n = new Node<T>;
    if (n == NULL)
    {
        std::cerr << "Cann't open chunk of memory\n";
        return;
    }
    n->value = valueIn;
    n->next = NULL;
    if (this->head == NULL)
    {
        this->head = n;
        this->tail = this->head;
    }
    else
    {
        this->tail->next = n;
        this->tail = this->tail->next;
    }
}
template <class T>
int SinglyLinkedList<T>::size()
{
    // space O(1)   time O(1)
    return this->count;
}
template <class T>
void SinglyLinkedList<T>::print()
{
    // space O(1)   time O(n)
    Node<T> *node = head;
    while (node)
    {
        std::cout << node->value << std::endl;
        node = node->next;
    }
}
template <class T>
SinglyLinkedList<T>::~SinglyLinkedList()
{ // space O(1)   time O(n)
    Node<T> *node = head;
    while (head)
    {
        node = head->next;
        delete head;
        head = node;
    }
}