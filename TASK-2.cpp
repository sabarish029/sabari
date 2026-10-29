#include <stdio.h>

typedef unsigned short meter_t;

unsigned int consumption(meter_t p, meter_t c)
{
    return (meter_t)(c - p);
}

int main()
{
    printf("%u\n", consumption(1200, 1530));
    printf("%u\n", consumption(65400, 120));

    return 0;
}
