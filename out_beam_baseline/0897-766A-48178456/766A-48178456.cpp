#include <bits/stdc++.h>

using namespace std;

const long long int INF = (long long int)(8e18);
const long long int MOD = 998244353;
int main() 
	{ string a, b;
	cin >> a >> b;
	if (a.length() != b.length())
		{ cout << max(a.length(), b.length()) << '\n';
	} else if (a != b)
		{ cout << a.length() << '\n';
	} else
		{ cout << - 1 <<'\n';
	} return 0;
}
