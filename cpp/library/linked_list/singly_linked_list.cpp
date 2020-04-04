#include "singly_linked_list.hpp"
#include <iostream>

template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    tail = NULL;
    count = 0;
}
template <class T>
void LinkedList<T>::append(T valueIn)
{
    this->count += 1;
    Node<T> *n = (Node<T> *)malloc(sizeof(Node<T>));
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
int LinkedList<T>::size()
{
    return this->count;
}
template <class T>
void LinkedList<T>::print()
{
    Node<T> *node = head;
    while (node)
    {
        std::cout << node->value << std::endl;
        node = node->next;
    }
}
template <class T>
LinkedList<T>::~LinkedList()
{
    Node<T> *node = head;
    while (head)
    {
        node = head->next;
        free(head);
        head = node;
    }
}
