#include <bits/stdc++.h>

using namespace std;

void prn(int pos) 
	{ cout << pos << "\n";
}
int main() 
	{ long long n, k;
	cin >> n >> k;
	long long sz = n;
	int pos = 1;
	long long ai;
	cin >> ai;
	long long sum = 0;
	for (int i = 2; i <= sz; ++i) 
		{ ++pos;
		cin >> ai;
		long long d = sum - (n - pos) * (pos - 1) * ai;
		if (d < k) 
			{ prn(i);
			--pos;
			--n;
		}  else 
			{ sum += ai * ( pos - 1 ) ;
		}
	}
	return 0;
}
