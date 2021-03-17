#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, p;
	string str[45];
	long long sum, now;
	cin >> n >> p;
	sum = 0, now = 0;
	for (int i = n - 1; i >= 0; i--) cin >> str[i];
	for (int i = 0; i <= n - 1; i++) 
		{ if (str[i] == "half") 
			{ sum += now * p;
			now = now * 2;
		}  else 
			{ sum += now * p + p / 2;
			now = now * 2 + 1;
		}
	}
	cout << sum << endl ;
	return 0;
}
