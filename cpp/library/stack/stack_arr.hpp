/********************************************************

stack header file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(STACK_HPP)
#define STACK_HPP
#include <vector>
// All declarations of library

template <class T>
class Stack
{
private:
    std::vector<T> vec;
    int num_elements;
    int next_index;
    int capacity;
    void __handle_capacity_stack(); //space O(n)    time O(n)

public:
    Stack(int initial_size = 10); //space O(n)    time O(n)
    void push(T data);            //space O(1)    time O(1)
    int size();                   //space O(1)    time O(1)
    bool is_empty();              //space O(1)    time O(1)
    T pop();                      //space O(1)    time O(1)
    std::vector<T> get_stack();   //space O(1)    time O(1)
};

#endif // STACK_HPP