#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node **temp, int new_data);
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_node;
    new_node->next = (*temp);
    (*temp) = new_node;
}

void insertAfter(struct node *pre_node, int new_data);
{
    if (pre_node = NULL)
    {
        printf("The given previous data can not be null");
        return 0;
    }
    struct node new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_node;
    new_node->next = pre_node->next;
    pre_node->next = new_node;
}
void append(struct node **temp, int new_data);
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *temp;
    new_node->data = new_node;
    new_node->next = NULL;
    if (*temp == NULL)
    {
        *temp = new_node;
        return 0;
    }
    while (*last->next = = NULL)
    {
        last = last->next;
        last->next = new_node;
        return 0;
    }
}

void printlist(struct node *head);
{
    while (node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
}

int main()
{
    struct node *head = NULL;
    append(&head, 6);
    push(&head, 7);
    append(&head, 1);
    push(&head, 4);
    insertAfter(head->next, 8);
    printf("create linked list:");
    printlist(head);
    return 0;
}