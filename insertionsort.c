#include<stdio.h>
#include<stdlib.h>
//Insertion Sort
/*This algo keeps on sorting the array repeatedly until it reaches the last element, resulting in a fully sorted array at the end*/
void insertionsort()
{
    system("cls");
    printf("Please enter the size of the array:\n");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Please enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i=0;
    while(i<n)
    {
        int j=i+1;
        while(j>0 && a[j-1]>a[j] && j<n)
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
        i++;
    }
    printf("Your sorted array:\n{");
    for(int i=0; i<n-1; i++)
    {
        printf("%d,", a[i]);
    }
    printf("%d}", a[n-1]);
}
