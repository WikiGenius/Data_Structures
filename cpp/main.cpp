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
    SinglyLinkedList<int> l;

    l.prepend(4);
    l.append(2);
    l.prepend(4);
    l.prepend(9);
    l.append(5);
    l.append(34);
    l.append(67);
    l.prepend(-9);
    l.prepend(0);
    print_test(l.to_vector(), {0, -9, 9, 4, 4, 2, 5, 34, 67});
    l.insert(0, 4);
    print_test(l.to_vector(), {4, 0, -9, 9, 4, 4, 2, 5, 34, 67});
    l.insert(10, -23);
    print_test(l.to_vector(), {4, 0, -9, 9, 4, 4, 2, 5, 34, 67, -23});
    l.insert(3, 56);
    print_test(l.to_vector(), {4, 0, -9, 56, 9, 4, 4, 2, 5, 34, 67, -23});
    print_test(l.search(4), 0);
    print_test(l.search(-23), 11);
    print_test(l.search(56), 3);
    print_test(l.search(7), -1);
    l.pop_back();
    print_test(l.to_vector(), {4, 0, -9, 56, 9, 4, 4, 2, 5, 34, 67});
    l.pop_forward();
    print_test(l.to_vector(), {0, -9, 56, 9, 4, 4, 2, 5, 34, 67});
    l.pop_back();
    print_test(l.to_vector(), {0, -9, 56, 9, 4, 4, 2, 5, 34});
    l.remove(56);
    print_test(l.to_vector(), {0, -9, 9, 4, 4, 2, 5, 34});
    l.remove(34);
    print_test(l.to_vector(), {0, -9, 9, 4, 4, 2, 5});
    l.remove(0);
    print_test(l.to_vector(), {-9, 9, 4, 4, 2, 5});
    l.remove(5);
    print_test(l.to_vector(), {-9, 9, 4, 4, 2});
    l.remove(50);
    print_test(l.to_vector(), {-9, 9, 4, 4, 2});
    print_test(l.size(), 5);
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