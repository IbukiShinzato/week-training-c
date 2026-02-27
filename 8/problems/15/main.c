#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 100;
    int prime[n + 1];
    int deleted[n + 1];

    srand((unsigned)time(NULL));

    for (int i = 1; i <= n; i++)
    {
        deleted[i] = 0;
        prime[i] = -1;
    }
    deleted[1] = 1;

    int l = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!deleted[i])
        {
            prime[l++] = i;
            deleted[i] = 1;
            for (int j = i; j <= n; j += i)
            {
                deleted[j] = 1;
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d ", prime[i]);
    }
    printf("\n");

    int count[n + 1];
    for (int i = 0; i <= n; i++) count[i] = 0;

    int x = rand() % n + 1;
    printf("%d = ", x);
    while (x == 1)
    {
        x = rand() % n + 1;
    }

    while (x > 1)
    {
        for (int i = 0; i < l; i++)
        {
            if (x % prime[i] == 0)
            {
                x /= prime[i];
                count[prime[i]]++;
            }
        }
    }

    int last = 0;
    for (int i = 0; i <= n; i++)
    {
        if (count[i] > 0) last = i;
    }

    for (int i = 0; i <= n; i++)
    {
        if (count[i] > 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                if (i == last && j == count[i] - 1)
                {
                    printf("%d\n", i);
                    break;
                }
                printf("%d × ", i);
            }
        }
    }

    return 0;
}
