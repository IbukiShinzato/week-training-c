#include <stdio.h>

int main()
{
    int n = 100;
    int a[n + 1];
    int deleted[n + 1];

    for (int i = 1; i <= n; i++)
    {
        deleted[i] = 0;
        a[i] = -1;
    }
    deleted[1] = 1;

    int l = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!deleted[i])
        {
            a[l++] = i;
            deleted[i] = 1;
            for (int j = i; j <= n; j += i)
            {
                deleted[j] = 1;
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
