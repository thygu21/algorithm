#include<stdio.h>

int main()
{
	int i, j, temp, A[10]={10,1,2,-7,5,2,6,8,9,4};
	
	for( i = 0; i < 9; i++)
	{
		for( j = i; A[j] > A[j+1] && j >= 0; j--)
		{
			temp = A[j+1];
			A[j+1] = A[j];			
			A[j] = temp;			
		}
	}
	
	for( i = 0; i < 10; i++)
	{
		printf("%d ",A[i]);
	}
}

