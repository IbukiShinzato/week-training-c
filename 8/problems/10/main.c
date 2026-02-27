#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 100;

int main()
{
    srand((unsigned)time(NULL));
    int n = 10;
    int even[n];
    int odd[n];

    int even_count, odd_count;
    even_count = 0;
    odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        int x = rand() % MAX + 1;
        printf("%d ", x);
        if (x % 2 == 0)
        {
            even[even_count++] = x;
        }
        else
        {
            odd[odd_count++] = x;
        }
    }
    printf("\n");

    printf("偶数：");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("奇数：");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
