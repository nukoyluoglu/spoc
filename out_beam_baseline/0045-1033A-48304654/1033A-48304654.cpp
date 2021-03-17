#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int ax, ay, bx, by, cx, cy, n;
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	if (cx > bx) 
		{ if (cy > by) 
			{ if ((ax < cx && ax > bx) || (ay < cy && ay > by)) 
				{ cout << "NO\n";
			}  else 
				{ cout << "YES\n";
			}
		}  else 
			{ if ((ax < cx && ax > bx) || (ay > cy && ay < by)) 
				{ cout << "NO\n";
			}  else 
				{ cout << "YES\n";
			}
		}
	}  else 
		{ if (cy > by) 
			{ if ((ax > cx && ax < bx) || (ay < cy && ay > by)) 
				{ cout << "NO\n";
			}  else 
				{ cout << "YES\n";
			}
		}  else 
			{ if ((ax > cx && ax < bx) || (ay > cy && ay < by)) 
				{ cout << "NO\n";
			}  else 
				{ cout << "YES" << endl ;
			}
		}
	}
	return 0;
}
