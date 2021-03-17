#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, j, n;
	int p[200000], b[200000], status[200000] = {0};
	int count = 0, result = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
		{ cin >> p[i];
		p[i]--;
	}
	for (i = 0; i < n; i++) 
		{ cin >> b[i];
		if (b[i] == 1) count++;
	}
	if (count % 2 == 0) result++;
	count = 0;
	for (i = 0; i < n; i++) 
		{ if (status[i] == 0) 
			{ status[i] = 1;
			int t = p[i];
			while (t != i) 
				{ status[t] = 1;
				t = p[t];
			}
			count++;
		}
	}
	if (count > 1) result += count;
	cout << result << endl ;
	return 0;
}
