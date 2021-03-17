#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int r[200][200], a, b, c, d, e;
	while (cin >> a) 
		{ vector<int> v2;
		int v[200];
		for (b = 1; b <= a; b++) 
			{ v[b] = 1;
			for (c = 1; c <= a; c++) { cin >> r[b][c]; }
		}
		for (b = 1; b <= a; b++) 
			{ for (c = 1; c <= a; c++) 
				{ if (b == c) continue;
				if (r[b][c] == 1) v[b] = 0;
				if (r[b][c] == 2) v[c] = 0;
				if (r[b][c] == 3) v[b] = 0, v[c] = 0;
			}
		}
		c = 0;
		for (b = 1; b <= a; b++) 
			{ if (v[b] == 1) 
				{ c++;
				v2.push_back(b);
			}
		}
		if (c) 
			{ cout << c << endl;
			for (d = 1; d <= c; d++) 
				{ if (d == 1) 
					{ cout << v2[d - 1];
				}  else 
					{ cout << " " << v2[d - 1];
				}
			}
			cout << endl;
		}  else 
			{ cout << c << endl;
		}
		v2. clear ( ) ;
	}
	return 0;
}
