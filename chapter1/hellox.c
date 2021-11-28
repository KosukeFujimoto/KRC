#include <stdio.h>

//cc hellox.c fails because \x requires a value
main() //warning: return type defaults to ‘int’ [-Wimplicit-int]
{
    printf("Hello, World\x"); // x represents hex value, need reference to display.
}