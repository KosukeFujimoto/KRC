#include <stdio.h>

main()
{
    int c; //This needs to be C to store EOF, char cannot store EOF because it's 1byte

    while ((c = getchar()) != EOF) // parenthesis is reuiqred c = getchar()
        putchar(c);
    printf("%d\n", getchar() != EOF); //1-6
    printf("EOF %d\n", EOF);          //1-7
}