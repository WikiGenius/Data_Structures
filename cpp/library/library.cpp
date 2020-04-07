/********************************************************

Library file collects all files in one 
to handle linking error because of template.

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#include "linked_list/singly_linked_list.cpp"
#include "linked_list/doubly_linked_list.cpp"
#include "stack/stack_arr.cpp"
#include "stack/stack_linked.cpp"

typedef int TYPE;

// Singly Linked List
template class SinglyLinkedList<TYPE>;
template bool iscircular(const SinglyLinkedList<TYPE> &linked_list);
template void make_loop_test(const SinglyLinkedList<TYPE> &linked_list);

// Stack
template class Stack_Arr<TYPE>;
template class Stack_L<TYPE>;