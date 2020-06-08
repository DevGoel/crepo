#include <stdio.h>
#include <stdlib.h>
//The main control
void main()
{
    printf("Please enter which program you want to execute.\n");
    printf("1. Spiral matrix\n");
    printf("2. Matchstick Game Simulation\n");
    printf("3. Random Dice Number Generator\n");
    printf("4. Snakes and Ladders Simulation\n");
    printf("5. Flipping Crumbs\n");
    printf("6. Sieve of Eratosthenes\n");
    printf("7. Selection Sort\n");
    printf("8. Merge\n");
    printf("9. Merge Sort\n");
    printf("10. Insertion Sort\n");
    printf("11. Bubble Sort\n");
    printf("12. Addition & Subtraction of large nos. via Arrays\n");
    printf("13. Strings\n");
    printf("14. Row-Major sort\n");
    printf("15. Column-Major sort\n");
    printf("16. At the Gates\n");
    printf("17. Chef Chick\n");
    printf("18. Pointers\n");
    printf("19. Diagonal Sort\n");
    printf("20. Sudoku Solver\n");
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 1: spiralmatrix();
        break;
        case 2: matchstickgame();
        break;
        case 3:
            printf("<======> %d <======>", randomdice()%6+1);
            break;
        case 4: snakesandladdersimulation();
        break;
        case 5: flippingcrumbs();
        break;
        case 6: sieveoferatosthenes();
        break;
        case 7: selectionsort();
        break;
        case 8: mergesort();
        break;
        case 9: mergesortmodified();
        break;
        case 10: insertionsort();
        break;
        case 11: bubblesort();
        break;
        case 12: ques1();
        break;
        case 13: ques2();
        break;
        case 14: ques3_1();
        break;
        case 15: ques3_2();
        break;
        case 16: atthegates();
        break;
        case 17: chefchick();
        break;
        case 18: ques4();
        break;
        case 19: ques3_3();
        break;
        case 20: sudoku();
        break;
        default:
            printf("Invalid choice");
            break;
    }
    printf("\n");
}


