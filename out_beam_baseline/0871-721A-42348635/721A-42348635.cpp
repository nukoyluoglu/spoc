#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	char a[100005];
	int b[100005];
	while (cin >> n) 
		{ memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		cin >> a;
		int j = 1, count = 0;
		for (int i = 0; i < n; i++) 
			{ if (a[i] == 'B')
				{ b[j]++;
			} else if (a[i] == 'W' && a[i + 1] == 'B')
				{ j++;
		} }
		for (int i = 1; i <= j; i++)
			{ if (b[i] != 0) count++;
		} cout << count << endl;
		if (count != 0) 
			{ for (int i = 1; i < j; i++)
				{ if (b[i] != 0) cout << b[i] << " ";
			} cout << b [ j ] << endl ;
		}
	}
	return 0;
}
