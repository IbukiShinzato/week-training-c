#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10000;

int main()
{
    int v[MAX + 1];
    for (int i = 1; i <= MAX; i++) v[i] = 0;

    for (int i = 1; i <= MAX; i++)
    {
        int sum = 0;
        for (int j = 1; j <= MAX; j++)
        {
            if (i % j == 0 && i != j)
            {
                sum += j;
            }
        }
        v[i] = sum;
    }

    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i + 1; j <= MAX; j++)
        {
            if (v[i] == j && v[j] == i) printf("%d %d\n", i, j);
        }
    }

    return 0;
}
