#include <stdio.h>

int main()
{
    int n = 40;
    int v[n];
    for (int i = 0; i < 2; i++) v[i] = 1;
    for (int i = 2; i < n; i++) v[i] = v[i - 1] + v[i - 2];

    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
