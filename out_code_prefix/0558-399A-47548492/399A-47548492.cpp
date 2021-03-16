#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, p, k;
	bool start = 1, end = 0;
	cin >> n >> p >> k;
	for (int i = p - k; i <= p + k; i++) 
		{ if (start) 
			{ if (i <= 1) 
				{ if (p == 1)
					{ cout << "(" << 1 << ")";
				} else
					{ cout << 1;
				} i = 1;
			}  else
				{ cout << "<< " << i;
			} start = 0;
			continue;
		}
		if (i >= n) 
			{ end = 1;
			if (p == n)
				{ cout << " (" << n << ")";
			} else
				{ cout << " " << n;
			} break;
		}
		if (i == p)
			{ cout << " (" << i << ")";
		} else 
			{ cout << " " << i;
		}
	}
	if (!end) cout << " >>";
	cout <<'\n';

}
