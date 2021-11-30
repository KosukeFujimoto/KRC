#include <stdio.h>

main()
{
    int x = 1, y = 2, z[10];
    int *ip;

    printf("%p %d\n", ip, *ip); //random pointer and random value
    ip = &x;
    printf("%p\n", ip); //pointer is set
    y = *ip;
    printf("%d\n", y); //value is copied from pointer of x
    *ip = 0;
    printf("%p %d\n", ip, *ip); //value of ip is 0 = x is 0
    printf("x:%d\n", x);        //value of ip is 0 = x is 0
    ip = &z[0];
    printf("%p %d\n", ip, *ip); //Update pointer to address of z[0]

    printf("%p\n", z);
    for (int i = 0; i < 10; i++)
    {
        printf("%p, %d\n", z + i, *(z + i));
    }
}