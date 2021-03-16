#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (m * a < b) 
		{ cout << n * a << endl;
	}  else 
		{ long long int price = (n / m) * b + min((n % m) * a, b);
		cout << price << endl ;

	}
	return 0;
}
