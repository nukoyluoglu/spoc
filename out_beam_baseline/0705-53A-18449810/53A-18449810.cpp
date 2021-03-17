#include <bits/stdc++.h>

using namespace std;

vector<string> v;
int main() 
	{ string x;
	cin >> x;
	long long n, i;
	string y;
	cin >> n;
	while (n--) 
		{ cin >> y;
		v.push_back(y);
	}
	sort(v.begin(), v.end());
	for (i = 0; i < v.size(); i++) 
		{ long long f = v[i].find(x);
		if (f == 0) 
			{ cout << v[i] << "\n";
			return 0;
		}
	}
	cout << x << endl ;
}
