#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

void begin_insert(int item)
{
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("overflow\n");
    }
    else
    {
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
    }
}

void insert_last(int item)
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
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
}

void insert(int position, int item)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow\n");
    }
    else
    {
        temp = head;
        for (int i = 0; i < position; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                return;
            }
        }
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
    }
}

void delete_begin()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
    }
}

void delete_last()
{
    struct node *ptr;
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
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
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
                return;
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
    // Insert Begin
    printf("insert begin\n");
    begin_insert(1);
    begin_insert(2);
    begin_insert(3);
    display();

    // Insert from Last
    printf("insert last\n");
    insert_last(1);
    insert_last(2);
    insert_last(3);
    display();

    printf("insert at positoin 2\n");
    insert(2, 4);
    display();

    printf("Delete begin\n");
    delete_begin();
    display();

    printf("Delete last\n");
    delete_last();
    display();

    printf("Search\n");
    search(4);
    display();
}
