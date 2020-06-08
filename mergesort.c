#include <stdio.h>
#include <stdlib.h>
//Merge Sort
//The logic works on merging two sorted arrays into one sorted array recursively (or repeatedly)
void mergesort()
{
    system("cls");
	int A[10]={4,9,6,12,2,8,6,3,1,7};
	int a=10;
	int B[10];

	int size=1;
	while (size<=a)
	{
		int start=0;
		while(start+size<a)
		{

//			 Merge subarray A[start ... mid-1] and A[mid ... end-1] into subarray B[start...end-1],
//			 where mid=start+size and end = start+ 2*size.

			int mid=start+size, end=start+2*size;
		    int i=start;
            while(i<end && i<a)
            {
                int j=i+1;
                while(j>start && A[j-1]>A[j] && j<end)
                {
                    int temp=A[j-1];
                    A[j-1]=A[j];
                    A[j]=temp;
                    j--;
                }
                i++;
            }

//			Update start to go to next pair of subarrays.
			start=start+2*size;
		}

//		Swap Arrays A[] and B[]
//        --->  No need for array B[], insertion sort is performed without an extra array

//		 Double size of the subarrays to be merged
		size=2*size;
	}

	printf("The Sorted Array :-\n{");
	for(int i=0; i<a-1; i++)
    {
        printf("%d,", A[i]);
    }
    printf("%d}", A[a-1]);
}
/*

Runtime Analysis
````````````````
For an input array of size n.

  Merge consecutive subarrays of size 1 ~ n/2 * O(1*1)

+ Merge consecutive subarrays of size 2 ~ n/4 * O(2*2)

+ Merge consecutive subarrays of size 4 ~ n/8 * O(4*4)

+ Merge consecutive subarrays of size 8 ~ n/16 * O(8*8)

.
.
.
+										~ STOP when n/(2^k) < 1
_________________________________________

Total = O()

*/
