#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, k;
	cin >> n >> k;
	if (k > n || (k == 1 && n > 1))
		{ cout << -1 << endl;
	} else if (k == 1) 
		{ cout << 'a' << endl;
	}  else 
		{ long long x = n - (k - 2);
		string str = "";
		long long i = 0;
		while (i < x) 
			{ if (i % 2 == 0)
				{ str += "a";
			} else
				{ str += "b";
			} i++;
		}
		for (long long i = 2; i < k; i++) 
			{ char ch = (i + 'a');
			str += ch;
		}
		cout << str << endl ;
	}
	return 0;
}
