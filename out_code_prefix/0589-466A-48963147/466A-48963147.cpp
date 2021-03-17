#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a, b;
	cin >> n >> m >> a >> b;
	int x = (n / m) * b + (n % m) * a;
	int y = (n / m + 1) * b;
	int z = n * a;
	cout << min ( x, min ( y, z ) ) << endl ;

}
