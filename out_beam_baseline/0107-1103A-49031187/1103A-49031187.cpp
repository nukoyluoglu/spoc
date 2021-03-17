#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string x;
	cin >> x;
	int v = 0, h = 0;
	for (int i = 0; i < x.size(); i++) 
		{ if (x[i] == '0') 
			{ if (!v)
				{ cout << 1 << ' ' << 1 << endl, v++;
			} else
				{ cout << 3 << ' ' << 1 << endl, v = 0;
		} }  else 
			{ if (!h)
				{ cout << 4 << ' ' << 3 << endl, h++;
			} else
				{ cout << 4 <<' '<< 1 << endl, h = 0 ;
		} }
	}
	return 0;
}
