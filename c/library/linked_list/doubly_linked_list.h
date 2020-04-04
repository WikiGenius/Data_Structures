/********************************************************

linked_list header 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(DOUBLE_LINKED_LIST_H)
#define DOUBLE_LINKED_LIST_H

// All declarations of library double linked list

typedef struct DoubleNode
{
    // double node
    // the value node integer and you can change it
    int value;
    struct DoubleNode *next;
    struct DoubleNode *prev;
} __attribute__((__packed__))
DoubleNode;

// append values into list
void dl_append(DoubleNode **head, DoubleNode **tail, int value);
// dislay values of list in forward
void dl_print_forward(DoubleNode *head);
// dislay values of list in backward
void dl_print_backward(DoubleNode *tail);
//clear list
void dl_clear(DoubleNode *head);

#endif // DOUBLE_LINKED_LIST_H
