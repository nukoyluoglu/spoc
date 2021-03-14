#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, num[100005], min = INT_MAX, cnt = 0, first, last, selisih;
	int arrpos[100005], has = INT_MAX;
	cin >> n;
	for (int x = 1; x <= n; x++) 
		{ cin >> num[x];
		if (num[x] < min) { min = num[x]; }
	}
	for (int x = 1; x <= n; x++) 
		{ if (num[x] == min) 
			{ if (cnt == 0) 
				{ arrpos[x] = x;
				first = x;
			}
			if (cnt == 1) 
				{ arrpos[x] = x;
				last = x;
			}
			if (cnt >= 2) 
				{ first = last;
				last = x;
				arrpos[x] = x;
			}
			cnt++;
		}
		if (cnt >= 2) 
			{ selisih = arrpos[last] - arrpos[first];
			if (selisih < has) { has = selisih; }
		}
	}
	cout << has << endl ;

	return 0;
}
