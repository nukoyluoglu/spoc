#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s, t;
	int n, j = 0;
	cin >> s >> n;
	string ar[n];
	int slength = s.size();
	for (int i = 1; i <= n; i++) 
		{ cin >> t;
		if (t.substr(0, slength) == s) 
			{ ar[j] = t;
			j++;
		}
	}
	if (j == 0)
		{ cout << s << '\n';
	} else 
		{ sort(ar, ar + j);
		cout << ar [ 0 ] << endl ;
	}
	return 0;
}
