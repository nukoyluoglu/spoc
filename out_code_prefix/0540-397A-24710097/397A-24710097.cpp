#include <bits/stdc++.h>

using namespace std;

int minel(vector<int> v, int x) 
	{ int l = 11111111;
	for (int i = 0; i <= x; i++) 
		{ if (v[i] < l) { l = v[i]; }
	}
	return l;
}
int main() 
	{ int n, s, e, p;
	cin >> n >> s >> e;
	int arr[100] = {0};
	int sum = 0;
	int l = -111;
	for (int i = 1; i < n; i++) 
		{ int x, y;
		cin >> x >> y;
		if (e <= y) 
			{ p = e;
		}  else 
			{ p = y;
		}
		for (int i = x; i < p; i++) { arr[i] = arr[i] + 1; }
	}
	for (int i = s; i < e; i++) 
		{ if (arr[i] == 0) { sum++; }
	}
	cout << sum << endl ;

	return 0;
}
