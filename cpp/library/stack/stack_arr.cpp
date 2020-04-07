/********************************************************

stack definitions using array concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/

#include "stack_arr.hpp"

template <class T>
Stack_Arr<T>::Stack_Arr(int initial_size)
{ //space O(n)    time O(n)
    this->vec.assign(initial_size, 0);
    this->num_elements = 0;
    this->next_index = 0;
    this->capacity = initial_size;
}
template <class T>
void Stack_Arr<T>::push(T data)
{ //space O(1)    time O(1)
    if (this->capacity == this->num_elements)
    {
        std::cout << "Out of space! Increasing Stack_Arr capacity ...\n";
        this->__handle_capacity_stack();
    }
    this->vec[this->next_index] = data;
    this->next_index += 1;
    this->num_elements += 1;
}

template <class T>
void Stack_Arr<T>::__handle_capacity_stack()
{ //space O(n)    time O(n)
    this->vec.resize(2 * this->capacity, 0);
    this->capacity *= 2;
}
template <class T>
int Stack_Arr<T>::size()
{ //space O(1)    time O(1)
    return this->num_elements;
}
template <class T>
bool Stack_Arr<T>::is_empty()
{ //space O(1)    time O(1)
    return this->num_elements == 0;
}
template <class T>
T Stack_Arr<T>::pop()
{ //space O(1)    time O(1)
    if (this->is_empty())
    {
        return 0;
    }
    this->next_index -= 1;
    this->num_elements -= 1;
    T data = this->vec[next_index];
    this->vec[next_index] = 0;
    return data;
}
template <class T>
std::vector<T> Stack_Arr<T>::get_stack()
{ //space O(1)    time O(1)
    return this->vec;
}