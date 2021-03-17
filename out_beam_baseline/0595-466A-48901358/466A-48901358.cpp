#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m, a, b;
	cin >> n >> m >> a >> b;
	if (m * a < b) 
		{ cout << n * a << endl;
	}  else 
		{ long long price = (n / m) * b + min((n % m) * a, b);
		cout << price << endl ;
	}
	return 0;
}
