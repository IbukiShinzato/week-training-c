#include "randLib.h"

#include <stdlib.h>
#include <time.h>

void init_rand() { srand((unsigned)time(NULL)); }
int getRand(int start, int end) { return rand() % (end - start + 1) + start; }
