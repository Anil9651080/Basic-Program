#include <stdio.h>
#include <stdlib.h>

void beginsert(int);

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice, item;
    do
    {
        printf("Enter the item do you want insert item\n");
        scanf("%d", item);
        beginsert(item);
        printf("\n press 0 to insert more?\n");
        scanf("%d", choice);
    } while (choice == 0);
}
void beginsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n over flow\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n NodeInsert\n");
    }
}