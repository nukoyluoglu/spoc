#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, r = 0, t = 0;
	cin >> n;
	for (int i = 1;; ++i) 
		{ r += i;
		t += r;
		if (t > n) 
			{ cout << (i - 1) << endl;
			break ;
		}
	}
	return 0;
}
