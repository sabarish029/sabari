#include <stdio.h>

int main()
{
    int u, i;
    float bill, total = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Enter units: ");

        if (scanf("%d", &u) != 1 || u < 0)
        {
            printf("Invalid input");
            return 1;
        }

        if (u <= 100)
            bill = u * 2;
        else if (u <= 200)
            bill = 200 + (u - 100) * 3;
        else
            bill = 500 + (u - 200) * 5;

        printf("Bill = Rs. %.2f\n", bill);
        total = total + bill;
    }

    printf("Total = Rs. %.2f", total);

    return 0;
}
