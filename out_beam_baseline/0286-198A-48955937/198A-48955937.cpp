#include <bits/stdc++.h>

using namespace std;

long long k, b, n, t, x = 1, ans;
int main() 
	{ cin >> k >> b >> n >> t;
	while (x <= t) x = x * k + b, ans++;
	

	return 0;
}
