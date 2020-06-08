#include<stdio.h>
#include<stdlib.h>
//Bubble Sort
/*The logic works on bubbling down the array from the last element to ith element and putting all minimum elements in the start*/
/*Understand here the difference between selection sort and bubble sort. Selection sort works on finding minimum elements and
putting it directly in the start, whereas, bubble sort moves or bubbles the element down to its required position*/
void bubblesort()
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
        int j=n-1;
        while(j>i)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
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
