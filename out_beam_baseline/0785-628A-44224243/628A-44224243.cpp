#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);
void fast_in_out() {}
void pause() {}
int main() 
	{ fast_in_out();
	int ar[] = {2, 4, 8, 16, 32, 64, 128, 256, 512};
	int n, b, q;
	cin >> n >> b >> q;
	int x = 0, y = n * q;
	for (int i = 8; i >= 0; i--) 
		{ if (n < ar[i]) continue;
		int k = ar[i];
		n = n - k;
		n += k / 2;
		i++;
		k = k * b + (k / 2);
		x += k;
	}
	cout << x << " " << y << '\n';
	pause ( ) ;
	return 0;
}
