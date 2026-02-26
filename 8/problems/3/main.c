#include <stdio.h>

int f(int x)
{
    if (x == 1)
    {
        return 1;
    }

    return x * f(x - 1);
}

int main()
{
    int x;
    printf("任意の数字を入力してください: ");
    scanf("%d", &x);

    printf("%d\n", f(x));
    return 0;
}