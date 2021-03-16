#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	vector<int> arr;
	while (m > 0) 
		{ int i;
		cin >> i;
		arr.push_back(i);
		m--;
	}
	sort(arr.begin(), arr.end());
	int distance = 1e9;
	for (int i = 0; i < arr.size() - n + 1; i++) 
		{ if (arr[i + n - 1] - arr[i] < distance) { distance = arr[i + n - 1] - arr[i]; }
	}
	cout << distance << endl ;

	return 0;
}
