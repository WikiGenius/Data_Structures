/********************************************************

stack definitions using linked list concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/

#include "stack_linked.hpp"

template <class T>
Stack_L<T>::Stack_L()
{ //space O(1)    time O(1)
    this->head = NULL;
    this->num_elements = 0;
}
template <class T>
void Stack_L<T>::push(T data)
{ //space O(1)    time O(1)
    Node<T> *n = new Node<T>;
    n->value = data;
    n->next = NULL;
    if (n == NULL)
    {
        std::cerr << "Problem: Cannot store variable in stack!\n";
        return;
    }
    if (this->head == NULL)
    {
        this->head = n;
    }
    else
    {
        n->next = this->head;
        this->head = n;
    }
    this->num_elements += 1;
}

template <class T>
int Stack_L<T>::size()
{ //space O(1)    time O(1)
    return this->num_elements;
}
template <class T>
bool Stack_L<T>::is_empty()
{ //space O(1)    time O(1)
    return this->num_elements == 0;
}
template <class T>
T Stack_L<T>::pop()
{ //space O(1)    time O(1)
    if (this->is_empty())
    {
        return 0;
    }
    this->num_elements -= 1;
    Node<T> *tmp = this->head->next;
    T data = this->head->value;
    delete this->head;
    this->head = tmp;
    return data;
}
template <class T>
std::vector<T> Stack_L<T>::get_stack()
{ //space O(n)    time O(n)
    std::vector<T> vec;
    Node<T> *node = this->head;
    while (node)
    {
        vec.insert(vec.begin(), node->value);
        // vec.push_front(node->value);
        node = node->next;
    }
    return vec;
}
template <class T>
void Stack_L<T>::clear()
{ //space O(1)    time O(n)
    Node<T> *node = this->head;
    while (this->head)
    {
        node = node->next;
        delete this->head;
        this->head = node;
    }
    this->head = NULL;
    this->num_elements = 0;
}
template <class T>
Stack_L<T>::~Stack_L()
{ //space O(1)    time O(n)
    this->clear();
}