#include <bits/stdc++.h>

using namespace std;

const int MAX = 100000;
const int INF = 1000000001;
int a[MAX];
int n, sum = 0;
string s;
int main() 
	{ cin >> n;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; ++i) sum += (s[i] == '8');
	int res = n / 11;
	if (sum <= res)
		{ cout << sum << endl;
	} else
		{ cout << res << endl ;

	} return 0;
}
