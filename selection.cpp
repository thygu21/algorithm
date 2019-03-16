#include<stdio.h>

int main()
{
	int i, j, min, temp, index, A[10]={1,4,2,7,5,2,6,8,9,10};
	
	for(i = 0; i < 10; i++)
	{
		min = 999;
		for(j = i; j < 10; j++)
		{
			if(min > A[j])
			{
				min = A[j];
				index = j;
			}
		}
		temp = A[i];
		A[i] = A[index];
		A[index] = temp;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", A[i]);
	}
	
	return 0;
}
