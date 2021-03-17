#include <bits/stdc++.h>

using namespace std;

int min(int a, int b) 
	{ return a < b ? a : b;
}
int max(int a, int b) 
	{ return a > b ? a : b;
}
int main() 
	{ int n, b, p, matches = 0;
	int x = 256;
	cin >> n >> b >> p;
	int N = n;
	while (n != 1) 
		{ if (x > n) 
			{ x /= 2;
			continue;
		}
		n -= x / 2;
		matches += x / 2;
	}
	cout << matches * ( 1 + 2 * b ) << " " << N * p << endl ;

}
