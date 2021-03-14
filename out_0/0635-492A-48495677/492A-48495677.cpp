#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[151], sum, sum1 = 0;
	cin >> sum;
	for (int i = 1; i <= 150; i++) 
		{ a[i] = (1 + i) * i / 2;
		sum1 += a[i];
		a[i + 1] = (2 + i) * (i + 1) / 2;
		if (sum >= sum1 && sum < sum1 + a[i + 1]) 
			{ cout << i << endl;
			break ;

		}
	}
	return 0;
}
