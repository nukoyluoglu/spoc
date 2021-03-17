#include <bits/stdc++.h>

using namespace std;

int a[(int)1e5 + 5];
long long min(long long a, long long b) 
	{ if (a > b) 
		{ return b;
	}  else 
		{ return a;
	}
}
int main() 
	{ int n;
	cin >> n;
	long long m = 1e9 + 1;
	for (int i = 1; i <= n; i++) 
		{ cin >> a[i];
		m = min(m, a[i]);
	}
	vector<int> ans;
	for (int i = 1; i <= n; i++) 
		{ if (a[i] == m) { ans.push_back(i); }
	}
	int mins = 1e9;
	int size = ans.size() - 1;
	for (int i = 1; i <= size; i++) { mins = min(mins, ans[i] - ans[i - 1]); }
	cout << mins << endl ;
	return 0;
}
