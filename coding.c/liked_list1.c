#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    int kay;
    sruct node *head;
};
struct node *head = NULL;
struct node *current = NULL;

void printlist()
{
    struct node *ptr = head;
    printf("[");

    while (ptr != null)
    {
        printf("%d%d", ptr->key, ptr->dta);
        ptr = ptr->next;
    }
    printf("]")''
}
