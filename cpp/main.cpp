/********************************************************

main file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#include "library/library.hpp"
#include <iostream>
using namespace std;
int count = 0;
template <typename T>
bool test(vector<T> vec, vector<T> solution);
template <typename T>
void print_test(vector<T> vec, vector<T> solution);
void print_test(int value, int solution);

int main(int argc, char const *argv[])
{
    Queue_L<int> q;
    print_test(q.is_empty(), 1);
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    print_test(q.size(), 2);

    q.enqueue(3);
    print_test(q.dequeue(), 1);
    print_test(q.dequeue(), 2);

    q.enqueue(4);
    q.enqueue(5);
    print_test(q.get_queue(), {3, 4, 5});
    print_test(q.size(), 3);
    q.enqueue(6);
    print_test(q.get_queue(), {3, 4, 5, 6});
    q.enqueue(7);
    print_test(q.get_queue(), {3, 4, 5, 6, 7});
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);

    print_test(q.get_queue(), {3, 4, 5, 6, 7, 8, 9, 10});
    print_test(q.dequeue(), 3);
    print_test(q.dequeue(), 4);
    print_test(q.dequeue(), 5);
    print_test(q.get_queue(), {6, 7, 8, 9, 10});

    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    print_test(q.get_queue(), {6, 7, 8, 9, 10, 11, 12, 13});
    q.enqueue(14);
    print_test(q.get_queue(), {6, 7, 8, 9, 10, 11, 12, 13, 14});
    print_test(q.size(), 9);
    print_test(q.front(), 6);

    for (size_t i = 0, n = q.size(); i < n; i++)
    {
        cout << q.dequeue() << endl;
    }
    print_test(q.get_queue(), {});
    q.dequeue();
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    print_test(q.get_queue(), {1, 2});
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
    count += 1;
    if (test(vec, solution))
    {
        cout << "#" << count << " pass\n";
    }
    else
    {
        cout << "#" << count << " fail\n";
    }
}
void print_test(int value, int solution)
{
    count += 1;
    if (value == solution)
    {
        cout << "#" << count << " pass\n";
    }
    else
    {
        cout << "#" << count << " fail\n";
    }
}