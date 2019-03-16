#include<iostream>

using namespace std;

const int number = 9;
int heap[9] = {5,3,2,6,4,8,10,7,1};

int main()
{
	int c, root, temp;
	
	for(int i = 1; i < number; i++)
	{
		c = i;
		do
		{
			root = (c - 1) / 2;
			if(heap[root] < heap[c])
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;	
		}while(c != 0);					
	}
	
	for(int i = number - 1; i >= 0; i--)
	{
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		root = 0;
		do
		{
			c = root * 2 + 1;
			if(c < i - 1 && heap[c] < heap[c+1])
			{
				c++;
			}
			
			if(c < i && heap[root] < heap[c])
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		}while(c < i);
		
	}
	
	for(int i = 0; i < number; i++)
	{
		cout << heap[i] << " ";
	}
	
	
}
