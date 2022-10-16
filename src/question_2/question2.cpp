#include "question2.h"
#include <cmath>
#include <time.h>

bool test_config()
{
    return true;
}

int roll_die(){

    srand(time(NULL));
    int diceRoll = rand() % 6 + 1;
    
    return diceRoll;
}