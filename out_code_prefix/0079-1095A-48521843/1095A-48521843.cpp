#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a;
	int n, num = 0, l = 2;
	cin >> n >> a;
	while (true) 
		{ if (num < n - 1) 
			{ cout << a[num];
			num += l;
			l++;
		}  else 
			{ cout << a[num] << endl;
			break ;

		}
	}
	return 0;
}
