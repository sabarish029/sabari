#include <stdio.h>
#define RATE2 225
#define RATE3 450
#define FIXED 5000

int main()
{
    int units = 150;
    long bill = FIXED;

    if (units > 100)
        bill += (units - 100) * RATE2;

    printf("Units = %d\n", units);
    printf("Bill = Rs %ld.%02ld\n", bill / 100, bill % 100);

    return 0;
}
