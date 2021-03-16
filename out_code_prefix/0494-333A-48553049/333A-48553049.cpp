#include <bits/stdc++.h>

using namespace std;

const int maxn = 100001;
long long n;
int main() 
	{ cin >> n;
	while (n % 3 == 0) n /= 3;
	cout << n / 3 + 1 << endl ;

}
