#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;
const double esp = 1e-5;
int main() 
	{ long long n, p;
	string a[50];
	while (cin >> n >> p) 
		{ for (long long i = 1; i <= n; i++) cin >> a[i];
		long long num = 1, t = 1;
		for (int i = n - 1; i >= 1; i--) 
			{ if (a[i] == "halfplus") 
				{ num = (num + 0.5) * 2;
				t++;
			}  else 
				{ num = num * 2;
			}
		}
		long long ans = 0;
		ans = num * p - t * (p / 2);
		cout << ans << endl ;
	}
}
