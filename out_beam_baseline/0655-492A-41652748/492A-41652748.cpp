#include <bits/stdc++.h>

using namespace std;

int a[10010];
int main() 
	{ a[1] = 1;
	long long int sum, m;
	for (int i = 2; i <= 10000; i++) a[i] = a[i - 1] + i;
	while (cin >> m) 
		{ for (int i = 1; i <= 10000; i++) 
			{ m -= a[i];
			if (m < a[i + 1]) 
				{ cout << i << endl;
				break ;
			}
		}
	}
	return 0;
}
