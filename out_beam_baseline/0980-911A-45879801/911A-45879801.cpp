#include <bits/stdc++.h>

using namespace std;

int arr[1000000];
int main() 
	{ int n;
	cin >> n;
	int minimum, answer = (int)1e9;
	vector<int> occurrences;
	for (int i = 0; i < n; i++) 
		{ cin >> arr[i];
		if (!i) minimum = arr[0];
		minimum = min(minimum, arr[i]);
	}
	for (int i = 0; i < n; i++)
		{ if (arr[i] == minimum) occurrences.push_back(i);
	} for (int i = 1; i < occurrences.size(); i++) answer = min(answer, occurrences[i] - occurrences[i - 1]);
	cout << answer << endl ;
	return 0;
}
