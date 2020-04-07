/********************************************************

basic structures header file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
April 2020


********************************************************/

#ifndef BASIC_STRUCTURES_HPP
#define BASIC_STRUCTURES_HPP
template <class T>
class Node
{
public:
    T value;
    Node *next;
} __attribute__((__packed__));
#endif //BASIC_STRUCTURES_HPP