#include <bits/stdc++.h>

using namespace std;

void solve() 
	{ int n, p;
	cin >> n >> p;
	long double ans = 0;
	int cnt = 0;
	vector<string> v;
	for (int i = 0; i < n; i++) 
		{ string s;
		cin >> s;
		v.push_back(s);
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < n; i++) 
		{ if (v[i] == "halfplus") 
			{ ans += 0.5;
			ans *= 2;
			cnt++;
		}  else 
			{ ans *= 2;
		}
	}
	cout << (long long)(ans)*p - cnt * (p / 2) << endl;
}
int main() 
	{ solve ( ) ;
	return 0;
}
