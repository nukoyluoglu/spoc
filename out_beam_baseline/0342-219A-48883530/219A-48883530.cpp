#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1);
const int MAX = 2e9 + 7;
const long long MOD = 1e9 + 7;
map<char, int> m;
void solve() 
	{ int k;
	cin >> k;
	string s;
	cin >> s;
	int n = s.size();
	if (n % k != 0) 
		{ cout << -1 << endl;
		return;
	}
	int need = n / k;
	for (int i = 0; i < n; i++) { m[s[i]]++; }
	string t = "";
	for (int i = 97; i < 123; i++) 
		{ if (m[char(i)] % k == 0) 
			{ for (int j = 0; j < m[char(i)] / k; j++) { t += char(i); }
		}  else 
			{ cout << -1 << endl;
			return;
		}
	}
	for (int i = 0; i < k; i++) { cout << t; }
	cout << endl;
}
int main() 
	{ solve ( ) ;
	return 0;
}
