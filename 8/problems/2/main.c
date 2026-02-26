#include <stdio.h>

int main()
{
    int a, b, c;
    for (a = 1; a <= 100; a++)
    {
        for (b = a + 1; b <= 100; b++)
        {
            for (c = 1; c <= 100; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("a=%d b=%d c=%d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}