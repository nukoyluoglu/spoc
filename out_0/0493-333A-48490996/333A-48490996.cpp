#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m, i, j, k;
	cin >> n;
	k = 3;
	while (1) 
		{ if (n % k != 0) 
			{ m = (n / k) + 1;
			break;
		}
		k *= 3;
	}
	cout << m << endl ;

}
