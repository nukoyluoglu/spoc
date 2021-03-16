#include <bits/stdc++.h>

using namespace std;

string s, sd;
long long n, i, l;
int main() 
	{ cin >> n;
	cin >> s;
	while (n != 0) 
		{ l++;
		n -= l;
	}
	for (i = 1; i <= l; i++) 
		{ sd = sd + s[0];
		s.erase(0, i);
	}
	cout << sd << endl ;

	return 0;
}
