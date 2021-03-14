#include <bits/stdc++.h>

using namespace std;

const long long N = 1e9 + 3;
const long long MN = 1e9 + 7;
const long long MX = -1e9 - 7;
long long n, a, b, x, c1, c2, cnt;
string s, s1;
bool bl = false;
long long c;
pair<long long, long long> pr;
vector<long long> v;
map<long long, long long> mp;
set<long long> st;
set<long long>::iterator it;
int main() 
	{ cin >> n >> a >> b;
	for (long long i = 0; i < n; i++) 
		{ cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	if (v[b - 1] == v[b]) 
		{ cout << 0;
	}  else 
		{ cout << v[b] - v[b - 1];
	}
	cout << endl ;

	return 0;
}
