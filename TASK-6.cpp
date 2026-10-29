#include <stdio.h>

int main()
{
    int units;

    printf("Enter units: ");

    if (scanf("%d", &units) != 1)
    {
        printf("Invalid input");
        return 1;
    }

    printf("Units = %d\n", units);
    printf("Bill = Rs %d.50\n", units * 162);

    return 0;
}
