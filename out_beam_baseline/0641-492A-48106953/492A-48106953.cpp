#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	long long val = 0, ans = 0;
	for (long long i = 0; i < 10001; i++) 
		{ val += i;
		ans += val;
		if (ans > n) 
			{ cout << i - 1 << endl ;
			return 0;
		}
	}
	return 0;
}
