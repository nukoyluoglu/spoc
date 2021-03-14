#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	if (n < 4) 
		{ cout << 1 << endl;
		return 0;
	}
	int cnt = 0, m = 1, i = 1, sum = 0;
	while (sum + i <= n) 
		{ sum = sum + i;
		cnt++;
		m++;
		i += m;
	}
	cout << cnt << endl ;

}
