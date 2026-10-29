#include <stdio.h>
#define RATE 5

int main()
{
    int units = 10;

#ifdef DEBUG
    printf("Debug Mode\n");
#endif

    printf("Bill = %d\n", units * RATE);

    return 0;
}
