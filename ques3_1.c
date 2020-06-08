#include<stdio.h>
#include<stdlib.h>
void ques3_1()
{
    system("cls");
    int n;
    printf("Enter number of rows:-\n");
    scanf("%d", &n);
    int a[n*n+1];
    int i=0;
    for(; i<n*n+1; i++)
    {
        scanf("%d", &a[i]);
        if(i==n*n || a[i]==0)
        {
            int j=0;
            while(j<i+1)
            {
                int k=j+1;
                while(k>0 && a[k-1]>a[k] && a[k]!=0 && k<i+1)
                {
                    int temp=a[k-1];
                    a[k-1]=a[k];
                    a[k]=temp;
                    k--;
                }
                j++;
            }
            if(a[i]==0)
            break;
            for(int j=1; j<n*n+1; j++)
            {
                a[j-1]=a[j];
            }
            i--;
        }
    }
    for(;i<n*n;i++)
        a[i]=0;
    int arr[n][n];
    printf("Row-major sorted 2-D:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[i][j]=a[n*i+j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

