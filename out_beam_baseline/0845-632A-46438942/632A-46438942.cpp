#include <bits/stdc++.h>

using namespace std;

string s[41];
long long n, p, sum;
double curr;
int main() 
	{ cin >> n >> p;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = n - 1; i >= 0; i--) 
		{ if (s[i] == "halfplus") curr += 0.5;
		sum += curr * p;
		curr *= 2;
	}
	cout << sum << endl ;
	return 0;
}
