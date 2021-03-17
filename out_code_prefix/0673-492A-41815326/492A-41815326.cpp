#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, cnt, sum, ans, i;
	cin >> n;
	cnt = 0, ans = 0, sum = 0;
	for (i = 1; i <= 10000; i++) 
		{ ans += i;
		sum += ans;
		if (sum > n) break;
		cnt++;
	}
	cout << cnt << endl ;

	return 0;
}
