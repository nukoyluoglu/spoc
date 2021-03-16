#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, p;
	cin >> n >> p;
	string str[n];
	long long i;
	long long ans, fans = 0;
	for (i = 0; i < n; i++) cin >> str[i];
	reverse(str, str + n);
	if (str[0] == "half")
		{ ans = 2;
	} else
		{ ans = 1;
	} fans += ans * p / 2;
	for (i = 1; i < n; i++) 
		{ if (str[i] == "half")
			{ ans *= 2;
		} else
			{ ans = ans * 2 + 1;
		} fans += ans * p / 2;
	}
	cout << fans << endl ;

}
