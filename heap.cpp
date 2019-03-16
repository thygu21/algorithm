#include<iostream>

using namespace std; 

const int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main()
{
	int c, root, temp;
	
	for(int i = 1; i < number; i++) // ����� Ʈ������	 
	{
		c = i
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
	
	for(int i = number - 1; i >= 0; i--)	// ���⼭�� �뷫������ ���ĵǾ� �־ �ڽ��߿� ū ��带 ã�´�. 
	{
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		root = 0;
		do
		{
			c = 2 * root + 1;
			if(c < i - 1 && heap[c] < heap[c+1])//������ ��尡 �� ũ�� ���ĵǱ� ������ �̰� ����Ѵ�. 
			{
				c++;
			}
		
			if(c < i && heap[root] < heap[c])//������ ��带 ã�ұ� ������ c < i�ε� ����ϴ� 
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

