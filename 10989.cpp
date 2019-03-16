#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int count[10001] = {0};
	int j, k;
	cin >> k;
	
	for(int i = 0; i < k; i++)
	{
		scanf("%d", &j);
		count[j]++;
	}
	
	for(int i = 0; i < 10001; i++)
	{
		for(j = 0; j < count[i]; j++)
		{
			printf("%d\n",i);
		}
	}
}
