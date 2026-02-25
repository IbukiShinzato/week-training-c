#include "logic.h"

#include <stdlib.h>
#include <time.h>

int player;
int computer;

void init() { srand((unsigned)time(NULL)); }
void setPlayer(int num) { player = num; }
void setComputer() { computer = rand() % 3; }
