#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const long long INFLL = 0x3f3f3f3f3f3f3f3fLL;
int main() 
	{ long long a, b, c;
	cin >> a >> b >> c;
	long long ans = (c + a - 1) * (b + a - 1) - a * (a - 1);
	cout << ans << endl ;
	return 0;
}
