#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int x, int y);
int lcm(int x, int y);

int main()
{
    srand((unsigned)time(NULL));
    int n1, m1;
    n1 = rand() % 10 + 1;
    m1 = rand() % 10 + 1;
    if (m1 == 1)
    {
        m1 = 2;
    }

    int n2, m2;
    n2 = rand() % 10 + 1;
    m2 = rand() % 10 + 1;
    if (m2 == 1)
    {
        m2 = 2;
    }

    int l = lcm(m1, m2);

    n1 *= l / m1;
    n2 *= l / m2;

    int n = n1 + n2;
    int m = l;

    n1 /= l / m1;
    n2 /= l / m2;

    if (gcd(n, m) != 1)
    {
        int g = gcd(n, m);
        n /= g;
        m /= g;
    }

    if (m == 1)
    {
        printf("%d/%d + %d/%d = %d\n", n1, m1, n2, m2, n);
    }
    else
    {
        if (n > m)
        {
            int integer = n / m;
            n -= integer * m;
            printf("%d/%d + %d/%d = %d(%d/%d)\n", n1, m1, n2, m2, integer, n, m);
        }
        else
        {
            printf("%d/%d + %d/%d = %d/%d\n", n1, m1, n2, m2, n, m);
        }
    }

    return 0;
}

int gcd(int x, int y)
{
    int r;

    if (x == 0 || y == 0)
    {
        fprintf(stderr, "引数エラーです。\n");
        return 0;
    }

    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int lcm(int x, int y)
{
    if (x == 0 || y == 0)
    {
        fprintf(stderr, "引数エラーです。\n");
        return 0;
    }

    return (x * y / gcd(x, y));
}