/********************************************************

queue definitions using array concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/

#include "queue_arr.hpp"

template <class T>
Queue_Arr<T>::Queue_Arr(int initial_size)
{ //space O(n)    time O(n)
    this->vec.assign(initial_size, 0);
    this->num_elements = 0;
    this->next_index = 0;
    this->front_index = -1;
    this->capacity = initial_size;
}
template <class T>
void Queue_Arr<T>::enqueue(T data)
{ //space O(1)    time O(1)
    if (this->front_index == -1)
    {
        this->front_index = 0;
    }
    if (this->capacity == this->num_elements)
    {
        std::cout << "Out of space! Increasing Queue_Arr capacity ...\n";
        this->__handle_full_capacity_queue();
    }
    this->vec[this->next_index] = data;
    this->next_index = (this->next_index + 1) % this->capacity;
    this->num_elements += 1;
}

template <class T>
void Queue_Arr<T>::__handle_full_capacity_queue()
{ //space O(n)    time O(n)
    if (this->capacity == this->num_elements)
    {
        std::vector<T> old_arr = this->vec;
        this->vec.assign(2 * this->capacity, 0);
        this->capacity *= 2;
        int index = 0;
        for (int i = this->front_index; i < old_arr.size(); i++)
        {
            this->vec[index] = old_arr[i];
            index += 1;
        }
        for (int i = 0; i < this->front_index; i++)
        {
            this->vec[index] = old_arr[i];
            index += 1;
        }
        this->front_index = 0;
        this->next_index = old_arr.size();
    }
}
template <class T>
int Queue_Arr<T>::size()
{ //space O(1)    time O(1)
    return this->num_elements;
}
template <class T>
bool Queue_Arr<T>::is_empty()
{ //space O(1)    time O(1)
    return this->num_elements == 0;
}
template <class T>
T Queue_Arr<T>::front()
{ //space O(1)    time O(1)

    return this->vec[this->front_index];
}
template <class T>
T Queue_Arr<T>::dequeue()
{ //space O(1)    time O(1)
    if (this->is_empty())
    {
        this->front_index = -1;
        this->next_index = 0;
        return 0;
    }
    T data = this->front();
    this->vec[this->front_index] = 0;
    this->front_index = (this->front_index + 1) % this->capacity;
    this->num_elements -= 1;

    return data;
}
template <class T>
std::vector<T> Queue_Arr<T>::get_queue()
{ //space O(1)    time O(1)
    return this->vec;
}