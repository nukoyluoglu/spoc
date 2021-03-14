#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, s, t;
	while (cin >> n) 
		{ t = 0;
		int r = 0, z = 0;
		for (int i = 0; i < n; i++) 
			{ cin >> a >> b;
			r += a;
			z += b;
			s = z - r;
			t = max(t, s);
		}
		cout << t << endl ;

	}
	return 0;
}
