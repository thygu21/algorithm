#include <iostream>

using namespace std;

int A[1000001];

void QuickS(int *A, int start, int end)
{
	int key, i, j, temp;
	key = start;
	i = start + 1;
	j = end;
	
	if(start >= end)
	{
		return;
	}
	
	while (i <= j)
	{
		while (A[key] >= A[i])
		{
			i++;
		}
		while (A[key] <= A[j] && key < j)
		{
			j--;
		}
		if (i >= j)
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

	QuickS(A, start, j - 1);
	QuickS(A, j + 1, end);
}

int main()
{
	int i, index;
	cin >> index;
	for (i = 0; i < index; i++)
	{
		cin >> A[i];
	}

	QuickS(A, 0, index - 1);

	for (i = 0; i < index; i++)
	{
		cout << A[i] << "\n";
	}
}

