#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	int n, sum = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.length(); i++) 
		{ if (s[i] == '8') sum++;
	}
	if (n / 11 < sum)
		{ cout << (n / 11) << endl;
	} else
		{ cout << sum << endl ;
} }
