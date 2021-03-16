#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159265359;
const long long MOD = 1000 * 1000 * 1000 + 7;
const int N = 200 * 1000 + 10;
int main() 
	{ int a, b;
	cin >> a >> b;
	int aa = a * a, bb = b * b;
	vector<int> as;
	vector<int> bs;
	for (int i = 1; i < aa; i++) 
		{ int sq = sqrt(aa - i * i);
		if (sq * sq + i * i == aa) as.push_back(i);
	}
	for (int i = 1; i < bb; i++) 
		{ int sq = sqrt(bb - i * i);
		if (sq * sq + i * i == bb) bs.push_back(i);
	}
	for (int i = 0; i < as.size(); i++) 
		{ for (int j = 0; j < bs.size(); j++) 
			{ int xa = as[i];
			int ya = sqrt(aa - xa * xa);
			int xb = bs[j];
			int yb = sqrt(bb - xb * xb);
			if ((xb - xa) * (xb - xa) + (ya + yb) * (ya + yb) == aa + bb && xb != xa) 
				{ cout << "YES\n";
				cout << xa << " " << ya << '\n';
				cout << xb << " " << -yb << '\n';
				cout << 0 << " " << 0 << '\n';
				return 0;
			}
		}
	}
	cout << "NO\n" ;

}
