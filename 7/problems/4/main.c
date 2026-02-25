#include <stdio.h>

#include "calculation.h"
#include "showResult.h"

int main(int argc, char** argv)
{
    init(100);
    showNum();
    add(10);
    showNum();
    sub(100);
    showNum();
    return 0;
}
