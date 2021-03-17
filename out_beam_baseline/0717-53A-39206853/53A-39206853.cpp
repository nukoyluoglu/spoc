#include <bits/stdc++.h>

using namespace std;

string st, st1[102];
long long n;
int main() 
	{ cin >> st >> n;
	for (int i = 1; i <= n; i++) cin >> st1[i];
	sort(st1 + 1, st1 + n + 1);
	for (int i = 1; i <= n; i++)
		{ if (st1[i].find(st) == 0) 
			{ cout << st1[i] << endl;
			return 0;
		}
	} cout << st << endl ;
	return 0;
}
