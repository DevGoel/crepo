#include <stdio.h>
#include <stdlib.h>
#include <time.h> // to keep track of time
//Random Dice Number Generator
int randomdice()
{
    srand(clock());
    srand(rand());
    return rand();
}
