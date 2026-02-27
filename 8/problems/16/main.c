#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 100;

int main()
{
    srand((unsigned)time(NULL));

    int n = 10;
    int a[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        x = rand() % MAX + 1;
        a[i] = x;
    }

    printf("before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 選択ソート
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        int max_idx = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                max_idx = j;
            }
        }

        int tmp = a[i];
        a[max_idx] = tmp;
        a[i] = max;
    }

    printf("after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
