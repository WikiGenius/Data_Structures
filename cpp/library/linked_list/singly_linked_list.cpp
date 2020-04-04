/********************************************************

singly linked list definitions 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#include "singly_linked_list.hpp"

#include <iostream>
template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{ // space O(1)   time O(1)
    head = NULL;
    tail = NULL;
    count = 0;
}
template <class T>
void SinglyLinkedList<T>::append(T valueIn)
{ // space O(1)   time O(1)
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
void SinglyLinkedList<T>::prepend(T valueIn)
{ // space O(1)   time O(1)
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
        n->next = this->head;
        this->head = n;
    }
}
template <class T>
void SinglyLinkedList<T>::insert(int pos, T valueIn)
{ // space O(1) time O(n)
    if (pos > this->size())
    {
        std::cerr << "Cannot insert - pos is out of range\n";
        return;
    }
    else if (pos == this->size())
    {
        this->append(valueIn);
        return;
    }
    else if (pos == 0)
    {
        this->prepend(valueIn);
        return;
    }
    else
    {
        this->count += 1;

        Node<T> *n = new Node<T>;
        n->value = valueIn;
        n->next = NULL;

        Node<T> *node = this->head;

        for (int i = 0; i < pos - 1; i++)
        {
            node = node->next;
        }
        Node<T> *tmp = node->next;
        node->next = n;
        n->next = tmp;
        return;
    }
}
template <class T>
int SinglyLinkedList<T>::search(T valueIn)
{ //space O(1) time O(n)
    Node<T> *node = this->head;
    int pos = 0;
    while (node)
    {
        if (node->value == valueIn)
        {
            return pos;
        }
        node = node->next;
        pos += 1;
    }
    return -1;
}

template <class T>
void SinglyLinkedList<T>::pop_back()
{ //space O(1) time O(n)
    this->count -= 1;
    Node<T> *n = this->head;
    for (; n->next != this->tail; n = n->next)
        ;
    delete this->tail;
    this->tail = n;
    this->tail->next = NULL;
}

template <class T>
void SinglyLinkedList<T>::pop_forward()
{ //space O(1) time O(1)
    this->count -= 1;
    Node<T> *n = this->head->next;
    delete this->head;
    this->head = n;
}
template <class T>
void SinglyLinkedList<T>::remove(T valueIn)
{ //space O(1) time O(n)
    int pos = this->search(valueIn);
    if (pos == -1)
    {
        std::cerr << "the value is not in the linked list\n";
        return;
    }
    else if (pos == 0)
    {
        this->pop_forward();
        return;
    }
    else if (pos == this->size() - 1)
    {
        this->pop_back();
        return;
    }
    else
    {
        this->count -= 1;
        Node<T> *node = this->head;
        while (node)
        {
            if (node->next->value == valueIn)
            {
                break;
            }
            node = node->next;
        }
        Node<T> *tmp = node->next->next;
        delete node->next;
        node->next = tmp;
    }
}
template <class T>
std::vector<T> SinglyLinkedList<T>::to_vector()
{ // space O(n) time O(n)
    std::vector<T> vec;
    Node<T> *node = this->head;
    while (node)
    {
        vec.push_back(node->value);
        node = node->next;
    }
    return vec;
}
template <class T>
int SinglyLinkedList<T>::size()
{ // space O(1)   time O(1)
    return this->count;
}
template <class T>
void SinglyLinkedList<T>::print()
{ // space O(1)   time O(n)
    Node<T> *node = this->head;
    while (node)
    {
        std::cout << node->value << " ";
        node = node->next;
    }
    std::cout << std::endl;
}
template <class T>
SinglyLinkedList<T>::~SinglyLinkedList()
{ // space O(1)   time O(n)
    Node<T> *node = this->head;
    while (this->head)
    {
        node = this->head->next;
        delete this->head;
        this->head = node;
    }
}