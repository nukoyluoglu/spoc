#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	cin >> n >> k;
	if (n < k || (k == 1 && n != 1))
		{ cout << -1 << endl;
	} else 
		{ if (n >= 2) 
			{ for (int i = 1; i <= n - k; i++)
				{ if (i % 2 == 0)
					{ cout << "b";
				} else
					{ cout << "a";
			} } if ((n - k) % 2 == 0) 
				{ cout << "ab";
				for (int i = 3; i <= k; i++) cout << char(i + 'a' - 1);
			}  else 
				{ cout << "ba";
				for (int i = 3; i <= k; i++) cout << char(i + 'a' - 1);
			}
			cout << endl;
		}  else
			{ cout << a << endl ;

	} }
	return 0;
}
