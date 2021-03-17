#include <bits/stdc++.h>

using namespace std;

int main() 
	{ unsigned long long n, t, coi = 1;
	cin >> n;
	while (n % 3 == 0) n /= 3;
	cout << ( n - 1 ) / 3 + 1 <<'\n';
}
