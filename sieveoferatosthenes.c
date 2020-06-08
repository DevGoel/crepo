#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // to declare bool data type usage in our program
//Sieve of Eratosthenes
void sieveoferatosthenes()
{
    system("cls");
    printf("Please enter the no. until which you require prime nos.\n");
    int n;
    scanf("%d", &n);
    bool prime[n+1];
    //boolean values are by default assigned as false
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)
            printf("%d ", i);
    }
}
