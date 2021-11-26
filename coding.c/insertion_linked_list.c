#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode;
newnode = (struct node *)malloc(sizeof(struct node))
    printf("Enter the data u want to insert:");
scanf("%d", &newnode->data);
newnode->next = head;
head = newnode;