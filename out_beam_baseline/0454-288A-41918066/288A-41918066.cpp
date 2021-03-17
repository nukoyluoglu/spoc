#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a, b;
	while (cin >> a >> b) 
		{ int i;
		if (a == 1) 
			{ if (b > 1) 
				{ cout << "-1" << endl;
			}  else 
				{ cout << 'a' << endl;
			}
		}  else 
			{ char q = 'c';
			int pl = 0;
			if (b > a || (b == 1 && a > 1)) 
				{ cout << "-1" << endl;
			}  else 
				{ for (i = 0; i < a - (b - 2); i++) 
					{ if (pl % 2 == 0) 
						{ pl++;
						cout << 'a';
					}  else 
						{ pl++;
						cout << 'b';
					}
				}
				for (i = 0; i < b - 2; i++) { cout << q++; }
				cout << endl ;
			}
		}
	}
	return 0;
}
