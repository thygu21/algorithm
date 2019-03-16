#include <iostream>

using namespace std;

int sorted[8];
const int length = 8;

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
		} else 	{
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
	} else {
		for(int t = i; t <= middle; t++)
		{
			sorted[k] = A[t];
			k++;
		}
	}
	
	for(int t = 0; t < n; t++)
	{
		A[t] = sorted[t];
	}
}

void mergeSort(int *A, int m, int n)
{
	
	if(m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(A, m, middle);
		mergeSort(A, middle + 1, n);
		merge(A, m, middle, n);
	}
	
}



int main()
{
	int A[length] = {1,4,2,5,4,7,4,8};
	mergeSort(A,0,7);
	
	for(int i = 0; i < length; i++)
	{
		cout << sorted[i] < " ";
	}
}
