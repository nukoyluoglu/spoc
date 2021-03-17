#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int64_t N;
	cin >> N;
	int64_t ans = N == 0 ? 0 : (N % 2 ? (N + 1) / 2 : N + 1);
	cout << ans << endl ;
	return 0;
}
