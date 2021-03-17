#include <bits/stdc++.h>

using namespace std;

pair<pair<int, int>, int> a[200020];
long long n, k, c, x, y, m, z, ac, t, b, i;
int main() 
	{ for (cin >> n; n--; i++)
		{ for (cin >> k >> c >> x >> y >> m, t = 0; k--; z = max(z, t)) 
			{ if (ac <= 200000) a[ac++] = make_pair(pair<int, int>(t, c), i);
			b = (c * x + y) % m;
			if (b < c && k) t++;
			c = b;
		}
	} cout << z << endl;
	if (ac < 200001) 
		{ sort(a, a + ac);
		for ( int i = 0 ; i < ac ; ++ i ) { cout << a [ i ]. first. second + 1 << "\n", ++ v, ++ q ; }

	}
}
