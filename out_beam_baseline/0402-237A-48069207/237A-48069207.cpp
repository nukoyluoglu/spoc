#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, c = -1, d = -1, co = 0, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a >> b;
		if (a == c && b == d) 
			{ co++;
			m = max(m, co);
		}  else
			{ co = 1;
		} c = a;
		d = b;
	}
	if (m == 0)
		{ cout << 1 << endl;
	} else
		{ cout << m << endl ;
	} return 0;
}
