#include <bits/stdc++.h>

using namespace std;

int n, a[100], b[100], visit[1010], t;
int main() 
	{ while (cin >> n) 
		{ memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(visit, 0, sizeof(visit));
		t = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		int p = n;
		for (int i = n - 1; i >= 0; i--) 
			{ if (visit[a[i]] > 0) 
				{ p--;
				continue;
			}
			b[t++] = a[i];
			visit[a[i]]++;
		}
		cout << p << endl;
		for (int i = t - 1; i >= 0; i--) 
			{ cout << b[i];
			if (i != 0) cout << " ";
		}
		cout << endl ;

	}
}
