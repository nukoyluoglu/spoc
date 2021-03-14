#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;
const long long inf = 1000000000000;
int main() 
	{ int n, k, p;
	cin >> n >> k >> p;
	vector<long long> A, B;
	for (int i = 0; i < n; i++) 
		{ long long x;
		cin >> x;
		A.push_back(x);
	}
	for (int i = 0; i < k; i++) 
		{ long long x;
		cin >> x;
		B.push_back(x);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	long long ans = inf;
	for (int i = 0; i <= k - n; i++) 
		{ long long temp = 0;
		int index = i;
		for (int j = 0; j < n; j++) 
			{ long long temp2 = 0;
			temp2 = abs(A[j] - B[index]) + abs(B[index] - p);
			temp = max(temp, temp2);
			index++;
		}
		ans = min(ans, temp);
	}
	cout << ans << endl ;

	return 0;
}
