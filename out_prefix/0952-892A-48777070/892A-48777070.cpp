#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
	{ while (b) swap(a %= b, b);
	return a;
}
int main() 
	{ long long n;
	cin >> n;
	vector<long long> nums(n);
	long long sum = 0;
	for (long long i = 0; i < n; ++i) 
		{ long long a;
		cin >> a;
		sum += a;
	}
	long long mx1 = 0, mx2 = 0;
	for (long long i = 0; i < n; ++i) 
		{ cin >> nums[i];
		if (nums[i] > mx1)
			{ mx2 = mx1, mx1 = nums[i];
		} else if (nums[i] <= mx1 && nums[i] > mx2)
			{ mx2 = nums[i];
	} }
	if (sum <= mx1 + mx2)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;

} }
