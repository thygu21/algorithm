#include<stdio.h>

int main()
{
	int i, j, temp, A[10]={1,10,2,7,5,2,6,8,9,4};
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", A[i]);
	}
	
	return 0;
}
