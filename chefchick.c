#include <stdio.h>

int chefchick(void) {
	int t, n;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    scanf("%d", &n);
	    int a[n];
	    int min=100000;
	    for(int j=0; j<n; j++)
	    {
	        scanf("%d", &a[j]);
	        if(a[j]<min)
	        min=a[j];
	    }
	    printf("%d\n", min);
	}
	return 0;
}

