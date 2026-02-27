#include <stdio.h>

int main()
{
    int n = 50;
    int v[n + 1];
    for (int i = 1; i <= n; i++) v[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            v[j] = v[j] ^ 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    int ans = 0;
    for (int i = 1; i <= n; i++) ans += v[i];

    printf("%d\n", ans);

    return 0;
}
