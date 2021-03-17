#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ vector<int> v(n);
		vector<int> s(n);
		for (int i = 0; i < n; i++) 
			{ cin >> v[i];
			s[i] = v[i];
		}
		sort(s.begin(), s.end());
		int a, b;
		a = s[0];
		b = s[1];
		int x, y, d;
		d = x = y = 1000000100;
		bool sw = true;
		for (int i = 0; i < n; i++) 
			{ if (a == v[i]) 
				{ x = i;
				break;
			}
		}
		for (int i = x + 1; i < n; i++) 
			{ if (b == v[i]) 
				{ y = i;
				d = min(d, abs(x - y));
				x = i;
			}
		}
		cout << d << endl ;

	}
	return 0;
}
