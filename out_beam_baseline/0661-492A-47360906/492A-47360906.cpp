#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int sum, i, b;
	sum = b = i = 1;
	for (;;) 
		{ if (sum == n) 
			{ cout << i << endl;
			break;
		}  else 
			{ if (sum > n) 
				{ cout << (i - 1) << endl;
				break;
			}  else 
				{ i++;
				b += i;
				sum += b ;
			}
		}
	}
	return 0;
}
