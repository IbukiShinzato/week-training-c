#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10;

int main()
{
    srand((unsigned)time(NULL));

    int n = 10;

    int v1[n];
    int v2[n];

    printf("配列1: ");
    for (int i = 0; i < n; i++)
    {
        int x = rand() % MAX + 1;
        v1[i] = x;
        printf("%d ", x);
    }
    printf("\n");

    printf("配列2: ");
    for (int i = 0; i < n; i++)
    {
        int x = rand() % MAX + 1;
        v2[i] = x;
        printf("%d ", x);
    }
    printf("\n");

    int and[n];
    int or[n];

    for (int i = 0; i < n; i++)
    {
        and[i] = 0;
        or[i] = 0;
    }

    int and_len = 0;
    int or_len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (or[v1[i] - 1] == 0)
            {
                or_len += 1;
                or[v1[i] - 1]++;
            }

            if (or[v2[i] - 1] == 0)
            {
                or_len += 1;
                or[v2[i] - 1]++;
            }

            if (v1[i] == v2[j] && and[v1[i] - 1] == 0)
            {
                and_len += 1;
                and[v1[i] - 1]++;
            }
        }
    }

    printf("共通の数: ");
    for (int i = 0; i < n; i++)
    {
        if (and[i] == 1)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    printf("どちらか入っている数: ");
    for (int i = 0; i < n; i++)
    {
        if (or[i] == 1)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
