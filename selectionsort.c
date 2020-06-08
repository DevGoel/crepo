#include <stdio.h>
#include <stdlib.h>
//Selection Sort
/*Here, we keep on putting
the minimum elements at the start*/
void selectionsort()
{
    system("cls");
    int n;
    printf("Please enter the size of the array.\n");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("Please enter element no. %d.) ", i+1);
        scanf("%d", &a[i]);
    }
    int i=0;
    while(i<n)
    {
        int min=i;
        int j=i+1;
        while(j<n)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            j++;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        i++;
    }
    printf("Your final sorted array:-\n");
    printf("(");
    for(int i=0; i<n-1; i++)
    {
        printf("%d,", a[i]);
    }
    printf("%d)", a[n-1]);
}
