#include <stdio.h>

/*For fahr = 0, 20, ..., 300, print celcius corresponding to the fahr*/
main() //warning: return type defaults to ‘int’ [-Wimplicit-int]
{
    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    for (int fahr = 300; fahr > 0; fahr = fahr - 20) // 1-5
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}