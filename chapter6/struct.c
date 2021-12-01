#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point_
{
    int x;
    int y;
} a, b;

int main()
{
    struct point p1;
    p1.x = 1;
    p1.y = 2;
    printf("%d %d\n", p1.x, p1.y);

    a.x = 1;
    a.y = -1;
    printf("%d %d\n", a.x, a.y);

    b.x = 2;
    b.y = -2;
    printf("%d %d\n", b.x, b.y);

    return 0;
}