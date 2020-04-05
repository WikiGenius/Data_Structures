/********************************************************

linked list file

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#include "singly_linked_list.cpp"
#include "doubly_linked_list.cpp"

typedef int TYPE;

template class SinglyLinkedList<TYPE>;
template bool iscircular(const SinglyLinkedList<TYPE> &linked_list);
template void make_loop_test(const SinglyLinkedList<TYPE> &linked_list);
