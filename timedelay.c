#include <stdio.h>
#include <stdlib.h>
//Time delay function
#include <time.h>
void delay(int time_in_seconds)
{
    int milli_seconds=1000*time_in_seconds;
    clock_t start_time=clock();
    while(clock()<start_time+milli_seconds)
        ;
}
//Countdown function from i --> i (i-1) (i-2) ....... 3 2 1 0
void countdown(int i)
{
    printf(" %d", i);
    for(int j=0;j<i;j++)
    {
        delay(1);
        printf(" %d", i-j-1);
    }
    printf("\n");
}
