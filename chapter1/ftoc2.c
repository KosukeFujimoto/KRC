#include <stdio.h>

/*For fahr = 0, 20, ..., 300, print celcius corresponding to the fahr*/
main() //warning: return type defaults to ‘int’ [-Wimplicit-int]
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr  cel\n"); //1-3
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("cel  fahr\n"); //1-3
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32; // 1-4
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}