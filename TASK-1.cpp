#include <stdio.h>

int main()
{
    int p, c, units;
    float bill;

    printf("Enter previous reading: ");
    scanf("%d", &p);

    printf("Enter current reading: ");
    scanf("%d", &c);

    units = c - p;
    bill = units * 5 + 50;

    printf("Units = %d\n", units);
    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}
