#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            continue;
        }

        int cnt = 0;
        int n = i;
        while (n > 0)
        {
            int m = i % 10;
            if (m == 3) cnt++;
            n /= 10;
        }

        if (cnt >= 1) printf("%d\n", i);
    }

    return 0;
}