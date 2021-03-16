#include <bits/stdc++.h>

using namespace std;

void solve() 
	{ int n, b, p;
	cin >> n >> b >> p;
	int br = 0;
	int tr = n * p;
	while (n > 1) 
		{ int x = 1;
		while (2 * x < n) { x *= 2; }
		br += x * (2 * b + 1);
		n -= x;
	}
	cout << br << " " << tr << endl;
}
int main() 
	{ solve ( ) ;

}
