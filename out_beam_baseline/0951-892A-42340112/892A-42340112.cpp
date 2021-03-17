#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int x;
	long long int k = 0;
	cin >> x;
	vector<long long int> v;
	int a[x], b[x];
	for (int i = 0; i < x; i++) 
		{ int s;
		cin >> s;
		k += s;
	}
	for (int i = 0; i < x; i++) 
		{ long long int d;
		cin >> d;
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	long int s = v[x - 1] + v[x - 2];
	if (s >= k) 
		{ cout << "YES" << endl;
	}  else 
		{ cout << "NO" << endl ;
	}
	return 0;
}
