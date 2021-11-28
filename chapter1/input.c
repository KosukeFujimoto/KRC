#include <stdio.h>

main()
{
    int c; //This needs to be C to store EOF, char cannot store EOF because it's 1byte

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}