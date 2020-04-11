/********************************************************

queue header file using array concept

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/
#if !defined(QUEUE_HPP)
#define QUEUE_HPP
#include <vector>
// All declarations of library

template <class T>
class Queue_Arr
{
private:
    std::vector<T> vec;
    int num_elements;
    int next_index;
    int front_index;
    int capacity;
    void __handle_full_capacity_queue(); //space O(n)    time O(n)

public:
    Queue_Arr(int initial_size = 10); //space O(n)    time O(n)
    void enqueue(T data);             //space O(1)    time O(1)
    int size();                       //space O(1)    time O(1)
    bool is_empty();                  //space O(1)    time O(1)
    T front();                        //space O(1)    time O(1)
    T dequeue();                      //space O(1)    time O(1)
    std::vector<T> get_queue();       //space O(1)    time O(1)
};

#endif // QUEUE_HPP