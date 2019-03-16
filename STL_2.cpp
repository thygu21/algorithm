#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string, pair<int, int> > a, 
			pair<string, pair<int, int> > b)
{
	if(a.second.first == b.second.first) //second.first = greade
	{
		return a.second.second > b.second.second; //second.second = birth 어린게 참값이라 더 우선순위 
	} else
	{
		return a.second.first > b.second.first;
	}
}

int main()
{
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int ,int> >("Jon", make_pair(90, 19961007)));
	v.push_back(pair<string, pair<int ,int> >("Kim", make_pair(91, 19961017)));
	v.push_back(pair<string, pair<int ,int> >("lee", make_pair(92, 19961027)));
	v.push_back(pair<string, pair<int ,int> >("pack", make_pair(94, 19961007)));
	v.push_back(pair<string, pair<int ,int> >("moon", make_pair(93, 19961047)));//make_pair = pair<int, int>
	// v.push_back(pair<int, int>(93,14224));
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i< v.size(); i++)
	{
		cout << v[i].first << ' ';
	}
	return 0;
}
