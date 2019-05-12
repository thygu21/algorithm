#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>

using namespace std;

int numerous;

unsigned long countsum(int arr[], int n, int k)
{
	int i, currSum;

	unsigned long** dp;

	dp = new unsigned long*[n + 1];
	for (int i = 0; i < n + 1; ++i)
	{
		dp[i] = new unsigned long[k + 1];
        
	}

	for (int i = 1; i <= k; i++)
		dp[0][i] = 0;
	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;

	for (i = 1; i < n; i++) {
		for (currSum = 1; currSum <= k; currSum++) {
			if (currSum - arr[i - 1] < 0)
				dp[i][currSum] = dp[i - 1][currSum];
			else if (arr[i - 1] <= currSum)
			{
				if ((unsigned long long)dp[i - 1][currSum] + (unsigned long long)dp[i - 1][currSum - arr[i - 1]] > pow(2, 32) - 1)
				{
					cout << "NUMEROUS\n";
					numerous = 1;
					return 0;
				}
				dp[i][currSum] = dp[i - 1][currSum] + dp[i - 1][currSum - arr[i - 1]];
			}
		}
	}

	return dp[n - 1][k];
}

void printEqualSumSets(int arr[], int n)
{
	int i, currSum;

	int sum = accumulate(arr, arr + n, 0);

	if (sum & 1) {
		cout << "0\n";
		return;
	}

	int k = sum >> 1;
	bool** dp;

	dp = new bool*[n + 1];
	for (int i = 0; i < n + 1; ++i)
	{
		dp[i] = new bool[k + 1];
		dp[i][0] = true;
	}

	for (i = 1; i <= k; i++)
		dp[0][i] = false;

	for (i = 1; i <= n; i++) {
		for (currSum = 1; currSum <= k; currSum++) {
			dp[i][currSum] = dp[i - 1][currSum];
			if (arr[i - 1] <= currSum)
				dp[i][currSum] = dp[i - 1][currSum] | dp[i - 1][currSum - arr[i - 1]];
		}
	}

	vector<int> set1, set2;

	if (!dp[n][k]) {
		cout << "0\n";
		return;
	}

	i = n;
	currSum = k;

	while (i > 0 && currSum >= 0) {

		if (dp[i - 1][currSum]) {
			i--;
			set2.push_back(arr[i]);
		}
		else if (dp[i - 1][currSum - arr[i - 1]]) {
			i--;
			currSum -= arr[i];
			set1.push_back(arr[i]);
		}
	}

	unsigned long count = countsum(arr, n, k);
	if (numerous == 1)
	{
		return;
	}
	cout << count;
	cout << "\n{";
	for (i = 0; i < set1.size() - 1; i++)
		cout << set1[i] << ",";
	cout << set1[set1.size() - 1] << "},{";
	for (i = 0; i < set2.size() - 1; i++)
		cout << set2[i] << ",";
	cout << set2[set2.size() - 1] << "}\n";
}

int main()
{
	string input;
	int in;
	while (1)
	{
		numerous = 0;
		cin >> input;
		if (input == "EOI")
			return 0;

		in = stoi(input); // int변환
		int* a = new int[in]; // 입력 값 크기 만큼 배열 초기화
		for (int i = 0; i < in; i++)
		{
			cin >> a[i];
		}

		sort(a, a + in); // 정렬
		printEqualSumSets(a, in);
	}
}
