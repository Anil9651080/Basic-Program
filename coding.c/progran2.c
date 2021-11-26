#include <stdio.h>>
struct node
{
    int data;
    node *next;
} int main()
{
    node *head = null;
    node *second = null;
    node *third = null;

    head = new node();
    second = new node();
    third = new node();
    head->data = 1;
    head->next = second;
    secomd->data = 2;
    second->next = third;
    third->data = 3;
    third->next = null;
    return 0;
}