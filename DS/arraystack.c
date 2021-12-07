#include <stdio.h>
#include <assert.h>

#define MAX_STACK_SIZE 100
int stack[MAX_STACK_SIZE];
int sp = 0;

void push(int item)
{

    assert(sp < MAX_STACK_SIZE);
    stack[sp++] = item;
}

int pop()
{
    return stack[sp--];
}

int main()
{
    for (int i = 0; i < MAX_STACK_SIZE; i++)
        push(i);

    for (int i = 0; i < MAX_STACK_SIZE; i++)
        printf("%d\n", pop());

    //  Error occur by assert
    for (int i = 0; i < MAX_STACK_SIZE + 1; i++)
        push(i);

    return 0;
}