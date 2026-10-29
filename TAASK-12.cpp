#include <stdio.h>

int main()
{
    long long wh;
    float rate, bill;

    printf("Enter watt-hours: ");
    scanf("%lld", &wh);

    printf("Enter rate: ");
    scanf("%f", &rate);

    bill = (wh / 1000.0) * rate;

    printf("Normal Bill = Rs. %.2f\n", bill);
    printf("Peak Rate = Rs. %.2f\n", rate * 1.20);

    return 0;
}
