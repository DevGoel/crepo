#include <stdio.h>
#include <stdlib.h>
#include <time.h> // to keep track of time
//Snakes and Ladders Simulation
void snakesandladdersimulation()
{
    system("cls");
    int d1, d2, k1=0, k2=0;
    char c1;
    printf("STARTING GAME IN");
    countdown(3);
    while(1)
    {
        printf("Press 't' to throw dice, any other alphabet to surrender.\n");
        scanf(" %c", &c1);
        if(c1=='t' || c1=='T')
        {
            d1=randomdice()%6+1;
            delay(1);
            printf("You got %d\n", d1);
            if((k1+d1)<=100)
                k1+=d1;
            else
                printf("Chance skipped. You require %d\n", 100-k1);
            k1=snakes(k1);
            k1=ladders(k1);
            if(k1==100)
            {
                printf("Congratulations. You win...!!!\n");
                break;
            }
            printf("Computer: %d\n", k2);
            printf("Player: %d\n", k1);
            delay(1);
            printf("\nPlease wait for computer to throw the dice.\n");
            int a=randomdice()%3+1;
            delay(a);
            d2=randomdice()%6+1;
            printf("Computer got %d\n", d2);
            if((k2+d2)<=100)
                k2+=d2;
            else
                printf("Chance skipped. Computer requires %d\n", 100-k2);
            k2=snakes(k2);
            k2=ladders(k2);
            if(k2==100)
            {
                printf("Computer wins. Better luck next time\n");
                break;
            }
            printf("Computer: %d\n", k2);
            printf("Player: %d\n\n\n", k1);
        }
        else
        {
            printf("You surrendered. Computer wins.\n");
            break;
        }
    }
    printf("Goodbye...!");
}
int snakes(int a1)
{
    int a[10]={3,13,28,51,75,82,99,35,63,87};
    for(int i=5; i<10; i++)
    {
        if(a1==a[i])
           {
               a1=a[i-5];
               printf("Oops...! Encountered a SNAKE. Slipped to %d\n", a1);
               break;
           }
    }
    return a1;
}
int ladders(int a2)
{
    int b[10]={4,18,25,47,85,44,89,49,65,93};
    for(int i=0; i<5; i++)
    {
        if(a2==b[i])
            {
                a2=b[i+5];
                printf("Encountered a LADDER. Moved to %d\n", a2);
                break;
            }
    }
    return a2;
}
