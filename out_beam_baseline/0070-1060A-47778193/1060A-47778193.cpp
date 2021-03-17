#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int ans = 0;
	char s[101];
	cin >> s;
	for (int i = 0; i < n; i++) 
		{ if (s[i] == '8') ans++;
	}
	if (ans == 0 || n / 11 == 0)
		{ cout << 0 << endl;
	} else if (ans > n / 11)
		{ cout << n / 11 << endl;
	} else
		{ cout << ans << endl ;
	} return 0;
}
