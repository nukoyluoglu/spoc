#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	float a, b;
	cin >> n >> m >> a >> b;
	int sum = 0;
	if ((n % m) * a <= b) 
		{ sum += n / m * b + (n % m) * a;
	}  else
		{ sum = (n / m + 1) * b;
	} if (sum > n * a) sum = n * a;
	cout << sum << endl ;

}
