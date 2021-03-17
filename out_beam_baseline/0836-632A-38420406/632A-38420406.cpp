#include <bits/stdc++.h>

using namespace std;

const int maxn = 5005;
const int inf = 0x3f3f3f3f;
int main() 
	{ int a, b;
	cin >> a >> b;
	string s[50];
	for (int i = 1; i <= a; i++) { cin >> s[i]; }
	long long ans = b / 2, num = 1;
	for (int i = a - 1; i >= 1; i--) 
		{ if (s[i] == "halfplus") 
			{ ans += (num + 0.5) * b;
			num = num * 2 + 1;
		}  else 
			{ ans += num * b;
			num *= 2;
		}
	}
	cout << ans << endl ;
	return 0;
}
