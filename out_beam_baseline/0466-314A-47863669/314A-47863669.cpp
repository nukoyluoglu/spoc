#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int T = 1;
	while (T--) 
		{ int n, k;
		cin >> n >> k;
		vector<long long int> arr(n + 1);
		arr[0] = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i + 1]; }
		long long int c = 1;
		int p_i = 1;
		long long int cur_d = 0, prev_d = 0, di = 0;
		for (int i = 2; i <= n; i++) 
			{ cur_d = prev_d + 1LL * arr[p_i] * (c - 1);
			di = cur_d - 1LL * (n - i) * (c)*arr[i];
			if (di < k) 
				{ cout << i << '\n';
			}  else 
				{ c++;
				p_i = i;
				prev_d = cur_d ;
			}
		}
	}
	return 0;
}
