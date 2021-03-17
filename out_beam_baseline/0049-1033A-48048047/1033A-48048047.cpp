#include <bits/stdc++.h>

using namespace std;

int n, qx, qy, kx, ky, tx, ty;
int main() 
	{ cin >> n;
	cin >> qx;
	cin >> qy;
	cin >> kx;
	cin >> ky;
	cin >> tx;
	cin >> ty;
	if (kx < qx) 
		{ if (ky < qy) 
			{ if (tx < qx && ty < qy) 
				{ cout << "YES" << endl;
			}  else
				{ cout << "NO" << endl;
		} }  else 
			{ if (tx < qx && ty > qy) 
				{ cout << "YES" << endl;
			}  else
				{ cout << "NO" << endl;
		} }
	}  else 
		{ if (ky < qy) 
			{ if (tx > qx && ty < qy) 
				{ cout << "YES" << endl;
			}  else
				{ cout << "NO" << endl;
		} }  else 
			{ if (tx > qx && ty > qy) 
				{ cout << "YES" << endl;
			}  else
				{ cout << "NO" << endl ;
		} }
	}
}
