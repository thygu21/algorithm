#include<iostream>
#include<algorithm>
using namespace std;

string array[1001];

bool compare(string a, string b)
{
    int sum1 = 0, sum2 = 0;

    if(a.length() != b.length())
        return a.length() < b.length();
    else if(a.length() == b.length())
    {
        for(int i = 0; i < a.length(); i++)
        {
            if(0 < a[i] - '0' && a[i] - '0'< 10)
                sum1 += a[i] - '0';
            if(0 < b[i] - '0' && b[i] - '0'< 10)
                sum2 += b[i] - '0';
        }
        if(sum1 != sum2)
	    {
	        return sum1 < sum2;
	    }
	    else
	        return a < b;
    }
}

int main()
{
	int k;
	cin >> k;
	for(int i = 0; i < k; i++)
	{
		cin >> array[i];
	}
	sort(array, array + k, compare);
	for(int i = 0; i < k; i++)
	{
		cout << array[i] << "\n";
	}
}
