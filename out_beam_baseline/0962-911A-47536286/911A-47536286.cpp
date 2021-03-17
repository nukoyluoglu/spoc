#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, menor, pos, ans, i;
	cin >> n;
	vector<int> V(n);
	for (i = 0; i < n; i++) { cin >> V[i]; }
	menor = 2000000000;
	for (i = 0; i < n; i++) { menor = min(menor, V[i]); }
	for (i = 0; i < n; i++) 
		{ if (V[i] == menor) 
			{ pos = i;
			break;
		}
	}
	ans = 1000000;
	for (i = pos + 1; i < n; i++) 
		{ if (V[i] == menor) 
			{ if (i - pos < ans) ans = i - pos;
			pos = i;
		}
	}
	cout << ans << endl ;
}
