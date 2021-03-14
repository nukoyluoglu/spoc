#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ long long sum = 0, prev = 0, x = 0;
		for (int i = 1; i <= n; i++) 
			{ prev += sum;
			sum += i;
			if (sum + prev <= n)
				{ x++;
			} else
				{ break;
		} }
		cout << x << endl ;

	}
	return 0;
}
