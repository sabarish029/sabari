#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    float x = 10.5;
    long n = 3000000000L;

    printf("Integer division = %d\n", a / b);
    printf("Correct division = %.2f\n", (float)a / b);
    printf("Float value = %.2f\n", x);
    printf("Long value = %ld\n", n);
    printf("Rounded value = %.0f\n", 10.6);

    return 0;
}
