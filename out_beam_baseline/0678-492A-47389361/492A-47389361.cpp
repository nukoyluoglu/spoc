#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	while (cin >> n) 
		{ int i;
		long long t = 0;
		long long k = 0;
		int last;
		for (i = 1;; i++) 
			{ t += i;
			k += t;
			if (n >= k) 
				{ last = i;
			}  else 
				{ break;
			}
		}
		if (n == 0) { last = 0; }
		cout << last << endl ;
	}
}
