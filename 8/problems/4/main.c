#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int n;
    n = rand() % 1000 + 1;
    printf("n = %d\n", n);

    int res = 0;
    while (n > 0)
    {
        n /= 10;
        res += 1;
    }

    printf("桁数は%d\n", res);

    return 0;
}