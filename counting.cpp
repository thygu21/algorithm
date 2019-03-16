#include <iostream>

using namespace std;

int main()
{
	int array[30] = {1,2,3,4,5,1,5,3,5,2,
					 2,3,4,2,5,1,2,3,4,5,
					 1,3,2,5,2,5,4,3,1,2};
	int count[5];
	
	for(int i = 0; i < 5; i++)
	{
		count[i] = 0;
	}
	
	for(int i = 0; i < 30; i++)
	{
		count[array[i] - 1]++;
	}
	
	for(int i = 0; i < 5; i++)
	{
		if(count[i] != 0)
		{
			for(int j = 0; j < count[i]; j++)
				cout << i + 1 << " ";
		}
	}
	
	
}
