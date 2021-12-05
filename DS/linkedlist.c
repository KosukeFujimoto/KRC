#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void begininsert(int item)
{
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("overflow\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

void lastinsert(int item)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("node is inserted\n");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("node is inserted\n");
        }
    }
}

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}

void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("there is not item in list\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
    }
}

void search(int item)
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("empty list\n");
    }
    else
    {
        for (int i = 0; ptr != NULL; i++)
        {
            if (ptr->data == item)
            {
                printf("item found at %d\n", i + 1);
                break;
            }
            ptr = ptr->next;
        }
        printf("item not found\n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("item not found\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main()
{
    printf("begin insert\n");
    begininsert(1);
    begininsert(2);
    begininsert(3);
    printf("last insert\n");
    lastinsert(4);
    lastinsert(5);
    lastinsert(6);
    display();
    printf("begin delete\n");
    begin_delete();
    begin_delete();
    begin_delete();
    display();
    printf("last delete\n");
    last_delete();
    display();
}
