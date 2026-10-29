#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.50;
    else if (units <= 200)
        bill = 150 + (units - 100) * 2.50;
    else
        bill = 400 + (units - 200) * 4.00;

    printf("Total bill: Rs. %.2f\n", bill);

    return 0;
}
