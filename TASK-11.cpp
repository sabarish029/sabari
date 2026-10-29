#include <stdio.h>
#define RATE 150

int main()
{
    int units;
    long long bill;

    printf("Enter units: ");
    scanf("%d", &units);

    bill = (long long)units * RATE;

    printf("Total bill = %lld paise\n", bill);

    return 0;
}
