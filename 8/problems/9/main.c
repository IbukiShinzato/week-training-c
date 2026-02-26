#include <stdio.h>

const int MAX = 10000;

int main()
{
    int n;
    for (n = 1; n <= 10000; n++)
    {
        int v[n];
        int l = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                v[l++] = i;
            }
        }

        int sum = 0;
        for (int i = 0; i < l - 1; i++)
        {
            sum += v[i];
        }

        if (sum == n)
        {
            printf("n: %d\n", n);
            printf("約数: ");
            for (int i = 0; i < l; i++)
            {
                printf("%d ", v[i]);
            }
            printf("\n");
            printf("合計値: %d\n\n", sum);
        }
    }

    return 0;
}
