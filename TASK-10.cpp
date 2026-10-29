#include <stdio.h>

int main()
{
    int bills[] = {4000, 60000, 800000};
    int i;
    long long total;

    for (i = 0; i < 3; i++)
    {
        total = (long long)bills[i] * 16250;
        printf("Bills: %d\n", bills[i]);
        printf("Total in paise: %lld\n\n", total);
    }

    return 0;
}
