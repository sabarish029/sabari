#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define PAISE(x) ((x) * 100)

int main()
{
    int a = 5, b = 10;

    printf("Paise = %d\n", PAISE(5));
    printf("Square = %d\n", SQUARE(a + 1));
    printf("Maximum = %d\n", MAX(a, b));

    return 0;
}
