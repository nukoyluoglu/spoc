#include <bits/stdc++.h>

using namespace std;

long long p, he, shu;
int n;
string s[50];
int main() 
	{ cin >> n >> p;
	p /= 2;
	for (int i = 1; i <= n; i++) cin >> s[i];
	for (int i = n; i >= 1; i--) 
		{ shu = shu * 2;
		if (s[i] != "half") shu += 1;
		he += shu;
	}
	cout << he * p << endl ;
	return 0;
}
