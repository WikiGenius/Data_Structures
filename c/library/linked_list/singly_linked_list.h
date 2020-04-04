/********************************************************

linked_list header 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/
#if !defined(SINGLE_LINKED_LIST_H)
#define SINGLE_LINKED_LIST_H

// All declarations of library

typedef struct node
{
    // single node
    // the value node integer and you can change it
    int value;
    struct node *next;
} __attribute__((__packed__))
node;

// append values into list
void l_append(node **head, node **tail, int value);
// dislay values of list
void l_print(node *list);
//clear list
void l_clear(node *list);

#endif // SINGLE_LINKED_LIST_H
