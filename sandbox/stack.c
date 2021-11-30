#include <stdio.h>
#include <error.h>
#include <stdbool.h>

#define MAXSIZE 10
#define EMPTY -1
int stack[MAXSIZE];

int sp = EMPTY; //stack pointer

bool empty()
{
    if (sp == EMPTY)
        return true;
    else
        return false;
}

int peek()
{
    return stack[sp];
}

int pop()
{
    int data;

    if (!empty())
    {
        data = stack[sp--];
        return data;
    }
    else
    {
        printf("data is empty\n");
    }
}

int push(int data)
{
    if (sp != MAXSIZE)
    {
        stack[++sp] = data;
    }
    else
    {
        printf("stack is full\n");
    }
}

int search(int item)
{
    int ssp = 0; //sp for search

    while (ssp < sp)
    {
        if (stack[ssp++] == item)
            return ssp;
    }
    return -1; //Not found
}

int main()
{
    //Insert data
    for (int i = 0; i < 5; i++)
    {
        push(i);
    }

    printf("peek:%d\n", peek());

    while (!empty())
    {
        printf("%d \n", pop());
    }

    for (int i = 0; i < 5; i++)
    {
        push(i);
    }

    printf("item: %d \n", search(3));

    printf("item: %d \n", search(6));
}