/********************************************************

queue definitions using linked list concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/

#include "queue_linked.hpp"

template <class T>
Queue_L<T>::Queue_L()
{ //space O(1)    time O(1)
    this->head = NULL;
    this->tail = NULL;
    this->num_elements = 0;
}
template <class T>
void Queue_L<T>::enqueue(T data)
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
        this->tail = this->head;
    }
    else
    {
        this->tail->next = n;
        this->tail = this->tail->next;
    }
    this->num_elements += 1;
}

template <class T>
int Queue_L<T>::size()
{ //space O(1)    time O(1)
    return this->num_elements;
}
template <class T>
bool Queue_L<T>::is_empty()
{ //space O(1)    time O(1)
    return this->num_elements == 0;
}
template <class T>
T Queue_L<T>::front()
{ //space O(1)    time O(1)
    return this->head->value;
}
template <class T>
T Queue_L<T>::dequeue()
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
std::vector<T> Queue_L<T>::get_queue()
{ //space O(n)    time O(n)
    std::vector<T> vec;
    Node<T> *node = this->head;
    while (node)
    {
        vec.push_back(node->value);
        // vec.push_front(node->value);
        node = node->next;
    }
    return vec;
}
template <class T>
void Queue_L<T>::clear()
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
Queue_L<T>::~Queue_L()
{ //space O(1)    time O(n)
    this->clear();
}