#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ int sum1[1000] = {0};
		int sum2[1000] = {1};
		int sum = 0;
		for (int i = 1; i < 50; i++) 
			{ sum += i;
			sum1[i - 1] = sum;
			sum1[i] = sum1[i - 1] + i + 1;
			sum2[i] = sum2[i - 1] + sum1[i];
			if ( sum1 [ i - 1 ] <= n && sum2 [ i ] > n ) cout << i << endl ;

		}
	}
}
