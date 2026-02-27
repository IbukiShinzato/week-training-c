#include <stdio.h>

int main()
{
    int n = 30;
    int v[n];
    for (int i = 0; i <= 2; i++)
    {
        if (i == 2)
        {
            v[i] = 2;
            break;
        }
        v[i] = 1;
    }

    for (int i = 3; i < n; i++) v[i] = v[i - 1] + v[i - 2] + v[i - 3];

    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
