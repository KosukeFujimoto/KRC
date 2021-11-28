#include <stdio.h>

main()
{
    int c, n1, n2, n3;

    n1 = n2 = n3 = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++n1;
        if (c == ' ')
            ++n2;
        if (c == '\t')
            ++n3;
    }

    printf("n:%d w:%d t:%d\n", n1, n2, n3); // 1-8
}