/********************************************************

linked_list definitions 

Author: Muhammed El-Yamani
muhammedelyamani92@gmail.com
March 2020


********************************************************/

// All definitions of library
#include "singly_linked_list.h"
#include <stdlib.h>
#include <stdio.h>
// append values into list
void l_append(node **head, node **tail, int value)
{
    node *n = malloc(sizeof(node));
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
    }
    else
    {
        (*tail)->next = n;
        *tail = (*tail)->next;
    }
}
// dislay values of list
void l_print(node *list)
{
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i ", tmp->value);
        printf("\n");
    }
}
//clear list
void l_clear(node *list)
{
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        free(tmp);
    }
}