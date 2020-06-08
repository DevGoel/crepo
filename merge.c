#include <stdio.h>
#include <stdlib.h>
//Merge (Two sorted arrays into one sorted array)
void merge()
{
	int A[4]={2,4,6,8};
	int B[5]={3,6,9,11,12};
	int a=4,b=5;
	int C[9];
	int c=0;
	int i=0;
	int j=0;
	while (i<a && j<b)
	{
		if (A[i]<=B[j])
		{
			C[c]=A[i];
			c=c+1;
			i=i+1;
		}
		else
		{
			C[c]=B[j];
			c=c+1;
			j=j+1;
		}
	}
	while(i<a)
	{
		C[c]=A[i];
		c=c+1;
		i=i+1;
	}
	while(j<b)
	{
		C[c]=B[j];
		c=c+1;
		j=j+1;
	}
	for(int i=0; i<9; i++)
    {
        printf("%d\n", C[i]);
    }
}
