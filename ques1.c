#include <stdio.h>
#include <stdlib.h>
//CP Assignment QUES 1
//Give input as space separated characters or each character in a different line.
void ques1()
{
    system("cls");
    printf("Enter array elements as space separated integers, or each in a new line.\n");
    printf("Stop giving inputs by inputting -1\n");
    int a[10000], b[10000];
    int c1=0, c2=0;
    printf("\nEnter 1st array elements\n");
    for(int i=9999; i>=0; i--)
    {
        scanf("%d", &a[9999-i]);
        if(a[9999-i]==-1)
            break;
        c1++;
    }
    printf("\nEnter 2nd array elements\n");
    for(int i=9999; i>=0; i--)
    {
        scanf("%d", &b[9999-i]);
        if(b[9999-i]==-1)
            break;
        c2++;
    }
    for(int i=0; i<c1/2; i++)
    {
        a[i]=a[i]-a[c1-1-i];
        a[c1-1-i]=a[i]+a[c1-1-i];
        a[i]=a[c1-1-i]-a[i];
    }
    for(int i=0; i<c2/2; i++)
    {
        b[i]=b[i]-b[c2-1-i];
        b[c2-1-i]=b[i]+b[c2-1-i];
        b[i]=b[c2-1-i]-b[i];
    }
    int l1=c1, l2=c2, max;
    //Addition algorithm begins from next line
    if(l1>l2)
        max=l1;
    else if(l2>l1)
        max=l2;
    else
        max=l1+1;
    int i=0, c=0, res[max];
    while(i!=l2 && i!=l1)
    {
        res[i]=(a[i]+b[i]+c)%10;
        if(a[i]+b[i]+c>9)
            c=1;
        else
            c=0;
        i++;
    }
    if(l1==l2 && c==1)
    {
        res[i]=1;
        i++;
    }
    else if(l1==l2 && c==0)
    {
        i--;
    }
    for(; i<max; i++)
    {
        if(max==l1)
            res[i]=a[i];
        else
            res[i]=b[i];
    }
    printf("\nAddition Result:- \n");
    for(int j=i-1; j>=0; j--)
    {
        printf("%d ", res[j]);
    }
    //Subtraction Algorithm begins from next line
    printf("\n\nSubtraction Result:- \n");
    if(l1==l2)
        max=l1;
    int sum1=0, sum2=0, res2[max];
    for(int i=0; i<l1; i++)
        sum1=sum1*10+a[i];
    for(int i=0; i<l2; i++)
        sum2=sum2*10+b[i];
    i=0;
    if(sum1>sum2)
    {
        while(i!=l2)
        {
            if(a[i]<b[i])
            {
                if(a[i+1]==0)
                    for(int k=i+1; k<l1; k++)
                    {
                        if(a[k]==0)
                            a[k]=9;
                        else
                        {
                            a[k]-=1;
                            break;
                        }
                    }
                else
                {
                    a[i+1]--;
                }
                a[i]+=10;
            }
            res2[i]=a[i]-b[i];
            i++;
        }
        for(; i<max; i++)
            res2[i]=a[i];
    }
    else if(sum2>sum1)
    {
        while(i!=l2 || i!=l1)
        {
            if(b[i]<a[i])
            {
                b[i+1]--;
                b[i]+=10;
            }
            res2[i]=b[i]-a[i];
            i++;
        }
        for(; i<max; i++)
            res2[i]=b[i];
    }
    for(int k=i-1; k>=0; k--)
    {
        if(res2[k]==0)
            max--;
        else
            break;
    }
    for(int j=max-1; j>=0; j--)
        printf("%d ", res2[j]);
}
