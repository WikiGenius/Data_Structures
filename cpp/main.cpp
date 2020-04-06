/********************************************************

main file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#include "library/library.hpp"
#include <iostream>
using namespace std;

template <typename T>
bool test(vector<T> vec, vector<T> solution);
template <typename T>
void print_test(vector<T> vec, vector<T> solution);
void print_test(int value, int solution);

int main(int argc, char const *argv[])
{
    Stack<int> s;
    print_test(s.size(), 0);
    print_test(s.is_empty(), 1);
    print_test(s.get_stack(), {0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    s.push(6);
    s.push(-2);
    print_test(s.size(), 2);
    print_test(s.get_stack(), {6, -2, 0, 0, 0, 0, 0, 0, 0, 0});
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    print_test(s.size(), 10);
    print_test(s.get_stack(), {6, -2, 3, 4, 5, 6, 7, 8, 9, 10});
    s.push(11);
    print_test(s.size(), 11);
    print_test(s.get_stack(), {6, -2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    print_test(s.pop(),11);
    print_test(s.pop(),10);
    print_test(s.size(),9);

    return 0;
}

template <typename T>
bool test(vector<T> vec, vector<T> solution)
{
    if (vec.size() != solution.size())
    {
        return false;
    }
    typename vector<T>::iterator p1 = vec.begin();
    typename vector<T>::iterator p2 = solution.begin();
    for (; p1 != vec.end(); p1++, p2++)
    {
        if (*p1 != *p2)
        {
            return false;
        }
    }
    return true;
}
template <typename T>
void print_test(vector<T> vec, vector<T> solution)
{
    if (test(vec, solution))
    {
        cout << "pass\n";
    }
    else
    {
        cout << "fail\n";
    }
}
void print_test(int value, int solution)
{
    if (value == solution)
    {
        cout << "pass\n";
    }
    else
    {
        cout << "fail\n";
    }
}