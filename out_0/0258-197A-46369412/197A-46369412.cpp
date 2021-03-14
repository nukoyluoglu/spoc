#include <bits/stdc++.h>

using namespace std;

const int pi = 3.14;
int main() 
	{ int a, b, r;
	cin >> a >> b >> r;
	if (2 * r > min(a, b)) 
		{ cout << "Second" << endl;
	}  else 
		{ int cnt = 0;
		int ans = max(a, b);
		int res = min(a, b);
		while (1) 
			{ ans = max(ans, res);
			res = min(ans, res);
			cnt += res / (2 * r);
			ans -= (res / (2 * r)) * 2 * r;
			int minn = min(ans, res);
			if (minn < 2 * r) break;
		}
		if (cnt >= 1)
			{ cout << "First" << endl;
		} else
			{ cout << "Second\n" ;

	} }
	return 0;
}
