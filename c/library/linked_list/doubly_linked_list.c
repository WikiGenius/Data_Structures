/********************************************************

linked_list definitions 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/

// All definitions of library
#include "doubly_linked_list.h"
#include <stdlib.h>
#include <stdio.h>

// append values into list
void dl_append(DoubleNode **head, DoubleNode **tail, int value)
{
    DoubleNode *n = malloc(sizeof(DoubleNode));
    if (n == NULL)
    {
        fprintf(stderr, "Error there is no space in memory");
        return;
    }
    n->value = value;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
        *tail = *head;
        return;
    }
    else
    {
        // add next to tail
        (*tail)->next = n;
        // add prev to tail
        (*tail)->next->prev = *tail;
        //udate tail
        *tail = (*tail)->next;
        return;
    }
}
// dislay values of list in forward
void dl_print_forward(DoubleNode *head)
{
    DoubleNode *n = head;
    while (n != NULL)
    {
        printf("%i\n", n->value);
        n = n->next;
    }
}
// dislay values of list in backward
void dl_print_backward(DoubleNode *tail)
{
    DoubleNode *n = tail;
    while (n != NULL)
    {
        printf("%i\n", n->value);
        n = n->prev;
    }
}
//clear list
void dl_clear(DoubleNode *head)
{
    DoubleNode *n = head;
    while (head != NULL)
    {
        n = head->next;
        free(head);
        head = n;
    }
}