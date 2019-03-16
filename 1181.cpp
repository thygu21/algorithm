#include<iostream>
#include<algorithm>

using namespace std;

string array[20001];

bool compare(string a, string b)
{
    if(a.length() < b.length())
        return 1;
    else if(a.length() > b.length())
        return 0;
    else
        return a < b;
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
    	if(array[i] == array[i+1]) continue;
       		cout << array[i] << '\n';
    }
}
