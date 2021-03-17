#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e7 + 10;
int a[maxn];
int n;
int mini = 1e9 + 10;
int main() 
	{ cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a[i];
		if (a[i] < mini) mini = a[i];
	}
	vector<int> vec;
	for (int i = 0; i < n; i++) 
		{ if (mini == a[i]) { vec.push_back(i); }
	}
	mini = n;
	for (int i = 0; i < vec.size() - 1; i++) { mini = min(mini, vec[i + 1] - vec[i]); }
	cout << mini << endl ;

	return 0;
}
