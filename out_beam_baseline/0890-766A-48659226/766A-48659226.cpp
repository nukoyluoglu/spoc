#include <bits/stdc++.h>

using namespace std;

const long long N = 1e8 + 3;
const long long MN = 1e9 + 7;
const long long MX = -1e9 - 7;
long long n, m, cnt, mx = MX;
string a, b;
pair<long long, long long> pr;
vector<string> v;
map<string, long long> mp;
set<long long> st;
set<long long>::iterator it;
int main() 
	{ cin >> a >> b;
	if (max(a.size(), b.size()) > min(a.size(), b.size())) 
		{ cout << max(a.size(), b.size());
	}  else 
		{ while (true) 
			{ if (a != b) 
				{ cout << a.size();
				break;
			}
			a = a.substr(0, a.size() - 1);
			b = b.substr(0, b.size() - 1);
			if (a.size() == 0) 
				{ cout << -1;
				break;
			}
		}
	}
	cout << "\n" ;
	return 0;
}
