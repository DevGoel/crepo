#include <stdio.h>
#include <stdlib.h>
//Spiral Square Matrix
void spiralmatrix()
{
    system("cls");
    int n,p;
    printf("Please enter value of n. n -> order of square spiral matrix\n");
    scanf("%d", &n);
    system("cls");
    int a[n][n],k=1;
    for(int p=0; p<(n/2); p++)
    {
        for(int j=p; j<n-p-1; j++)
            {
                a[p][j]=k;
                k++;
            }
        for(int i=p; i<n-p-1; i++)
            {
                a[i][n-p-1]=k;
                k++;
            }
        for(int j=n-p-1; j>p; j--)
            {
                a[n-p-1][j]=k;
                k++;
            }
        for(int i=n-p-1; i>p; i--)
            {
                a[i][p]=k;
                k++;
            }
    }
    if(n%2==1)
        a[(n-1)/2][(n-1)/2]=n*n;
    for(int v=0; v<n; v++)
    {
        for(int v1=0; v1<n; v1++)
        {
            printf("%d\t", a[v][v1]);
        }
        printf("\n");
    }
}
