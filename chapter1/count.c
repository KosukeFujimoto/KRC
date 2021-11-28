#include <stdio.h>

main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF) // type character ctr+D instead of enter. Enter will give you anotehr ASCII char
        ++nc;
    printf("%ld\n", nc);
}