#include <iostream>

using namespace std;

int sorted[8];
int length = 8;

void merge(int *A, int m, int middle, int n)
{
	int i, j, k;
	i = m;
	j = middle + 1;
	k = m;
	
	while(i <= middle && j <= n)
	{
		if(A[i] <= A[j])
		{
			sorted[k] = A[i];
			i++;
		}
		else
		{
			sorted[k] = A[j];
			j++;
		}
		k++;		
	}
	
	if(i > middle)
	{
		for(int t = j; t <= n; t++)
		{
			sorted[k] = A[t];
			k++;
		}
	}
	else
	{
		for(int t = i; t <= middle; t++)
		{
			sorted[k] = A[t];
			k++;
		}
	}
	
	for(int t = m; t <= n; t++)
	{
		A[t] = sorted[t];
	}

}

int mergeSort(int *A, int m, int n)
{ 
	if(m < n)
	{
		int middle = (m + n) / 2;
		
		mergeSort(A, m, middle);
		mergeSort(A, middle+1, n);
		merge(A, m, middle, n);		
	}
	
}

int main()
{
	int A[length]={1,5,2,6,8,9,4,3};
	mergeSort(A, 0, length - 1);
	
	for(int i = 0; i < 8; i++)
	{
		cout << A[i] << " ";
	}
	
}
