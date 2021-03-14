#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, d;
	double a;
	cin >> n >> a >> d;
	long long t[n], v[n];
	for (int i = 0; i < n; i++) cin >> t[i] >> v[i];
	long double T = 0;
	for (int i = 0; i < n; i++) 
		{ if (v[i] * v[i] >= 2 * a * d) 
			{ T = max((long double)t[i] + sqrt((2.0 * d) / a), T);
		}  else 
			{ long double t1 = v[i] / a;
			long double s = (v[i] * v[i]) / (2 * a);
			T = max(T, (long double)t[i] + t1 + ((d - s) / v[i]));
		}
		cout. precision ( 12 ), cout << "T" ;

	}
}
