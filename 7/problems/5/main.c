#include <stdio.h>

#include "logic.h"
#include "showResult.h"

int main(int argc, char** argv)
{
    int num;
    init();
    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    while (1)
    {
        printf("あなたの手は？(0-2):");
        scanf("%d", &num);
        if (num < 0 || num > 2)
        {
            printf("終了します\n");
            break;
        }
        else
        {
            setPlayer(num);
            setComputer();
            judge();
        }
    }
    return 0;
}
