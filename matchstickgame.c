#include <stdio.h>
#include <stdlib.h>
//Matchstick Game Simulation
void matchstickgame()
{
    system("cls");
    int n,n1;
    char c1='y';
    printf("RULES OF THE GAME :-\n");
    delay(1);
    printf("* The user chooses a number N- the total number of matchsticks.\n");
    delay(3);
    printf("* A player (computer or user) can pick 1, 2, 3 or 4 matchsticks in a single turn.\n");
    delay(3);
    printf("* A toss decides who goes first, the user or the computer.\n");
    delay(3);
    printf("* Players pick matchsticks turn by turn, and the player forced to pick the last matchstick loses the game.\n");
    delay(3);
    while(1)
    {
        if(c1=='y'||c1=='Y')
        {
            printf("STARTING GAME IN");
            countdown(3);
        }
        c1=' ';
        printf("Please enter no. of matchsticks (>10)\n");
        scanf("%d", &n);
        if(n>10)
        {
            if(n%5==1)
            {
                printf("Player wins the toss and plays first\n");
                while(1)
                {
                    scanf("%d", &n1);
                    if(n1<1||n1>4)
                    {
                        printf("Invalid pick\n");
                        printf("Enter new input in");
                        countdown(3);
                        continue;
                    }
                    printf("Computer picked %d matchsticks\n", 5-n1);
                    printf("Remaining: %d\n", n-5);
                    n=n-5;
                    if(n==1)
                        break;
                }
            }
            else
            {

                printf("Computer wins the toss and plays first\n");
                printf("Computer picked %d matchsticks\n", (n-1)%5);
                n-=(n-1)%5;
                printf("Remaining: %d\n", n);
                while(1)
                {
                    scanf("%d", &n1);
                    if(n1<1||n1>4)
                    {
                        printf("Invalid pick\n");
                        printf("Enter new input in");
                        countdown(3);
                        continue;
                    }
                    printf("Computer picked %d matchsticks\n", 5-n1);
                    printf("Remaining: %d\n", n-5);
                    n-=5;
                    if(n==1)
                        break;
                }
            }
        }
        else
        {
            printf("Invalid Input. Number of matchsticks must be greater than 10\n");
            printf("Enter new input in");
            countdown(3);
            continue;
        }
        printf("Computer wins!\n");
        while(1)
        {
            printf("Do you want to play again?(y/n)\n");
            scanf(" %c", &c1);
            if(c1!='n'&&c1!='N'&&c1!='y'&&c1!='Y')
            {
                printf("Please answer in y or n\n");
                printf("Enter new input in");
                countdown(3);
                continue;
            }
            break;
        }
        if(c1=='n'||c1=='N')
            break;
        else
            system("cls");
    }
    printf("Goodbye\n");
    delay(1);
    system("cls");
}
