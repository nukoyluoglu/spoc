#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, sum, level;
	while (cin >> n) 
		{ if (n == 1) 
			{ cout << '1' << endl;
			continue;
		}
		sum = 1, level = 1;
		for (int i = 2;; i++) 
			{ level += i;
			sum += level;
			if (sum == n) 
				{ cout << i << endl;
				break;
			}  else if (sum > n) 
				{ cout << i - 1 << endl;
				break ;
			}
		}
	}
	return 0;
}
