#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, ans, sum, sum2;
	while (cin >> n) 
		{ ans = sum = sum2 = 0;
		while (true) 
			{ if (sum2 > n) break;
			ans++;
			sum += ans;
			sum2 += sum;
		}
		cout << ans - 1 << endl ;
	}
	return 0;
}
