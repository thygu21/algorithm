#include<stdio.h>

void QuickSort(int *A, int start, int end)
{
	
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	
	if(start >= end)
	{
		return;	
	}
	
	while(i <= j)
	{
		while(A[i] <= A[key])
		{
			i++;
		}
		while(A[j] >= A[key] && key < j)
		{
			j--;
		}
		if(i >= j) // 반복문이 끝나는 순간 실행 됨. 
		{
			temp = A[j];
			A[j] = A[key];
			A[key] = temp;
		}
		else
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	
	QuickSort(A, start, j - 1);
	QuickSort(A, j + 1, end);
}

int main()
{
	int A[10]={1,3,2,2,4,7,5,8,9,10};
	QuickSort(A, 0, 9);
	for(int i = 0; i<10; i++)
	{
		printf("%d ", A[i]);	
	} 
	
	return 0;
}
