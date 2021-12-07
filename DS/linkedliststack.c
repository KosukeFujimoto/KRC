#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void push(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    assert(ptr != NULL);

    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

int pop()
{
    assert(head != NULL);
    int value = head->data;
    head = head->next;
    return value;
}

int main()
{
    for (int i = 0; i < 10; i++)
        push(i);
    for (int i = 0; i < 10; i++)
        printf("%d\n", pop());
    return 0;
}