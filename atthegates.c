#include<stdio.h>
void atthegates()
{
    int n,t,k;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%d", &n, &k);
        char a[n];
        for(int j=0; j<n; j++)
        {
            scanf(" %c", &a[j]);
        }
        for(int j=0; j<k; j++)
        {
            if(a[n-1]=='H')
            {
                for(int l=0; l<n-1; l++)
                {
                    if(a[l]=='H')
                        a[l]='T';
                    else if(a[l]=='T')
                        a[l]='H';
                }
            }
            n--;
        }
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]=='H')
            count++;
        }
        printf("%d\n", count);
    }
}
