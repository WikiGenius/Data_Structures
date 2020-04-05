#include <stdio.h>
#include "library/library.h"
#include <stdlib.h>
// use linked list library
const int N = 500;

int main(int argc, char const *argv[])
{
    node *head = NULL;
    node *tail = NULL;
    for (int i = 0; i < N; i++)
    {
        l_append(&head, &tail, i + 1);
    }

    l_print(head);
    l_clear(head);
    return 0;
}
