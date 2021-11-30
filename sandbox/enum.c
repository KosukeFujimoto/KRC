
#include <stdio.h>

enum foo
{
    a,
    b,
    c
};

enum bar
{
    x = 10,
    y = 20
} point;

int main()
{
    enum foo test;
    test = a;
    printf("%d\n", test);
    printf("%d\n", a);

    test = b;
    printf("%d\n", test);
    printf("%d\n", b);

    point = x;
    printf("%d\n", point);
    printf("%d\n", x);
    point = y;
    printf("%d\n", point);
    printf("%d\n", y);

    int flags = a | b | c;
    printf("%d\n", flags);
}