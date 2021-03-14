#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, v;
	cin >> n >> v;
	double a[n];
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	double minvalue = INT_MAX;
	double b[n];
	for (int i = 0; i < n; i++) 
		{ cin >> b[i];
		minvalue = min(minvalue, b[i]);
	}
	double l = 0;
	double r = 1e18;
	double answer = 0;
	for (int i = 1; i <= 100; i++) 
		{ double mid = (l + (r - l) / 2);
		double sum = 0;
		int flag = 0;
		for (int i = 0; i < n; i++) 
			{ double value = a[i] * mid;
			if (value > b[i]) 
				{ flag = 1;
				break;
			}  else
				{ sum += (a[i] * mid);
		} }
		if (flag == 1) 
			{ r = mid - 1;
			continue;
		}
		if (sum <= v) 
			{ answer = sum;
			l = mid + 1;
		}  else 
			{ r = mid - 1;
		}
	}
	cout << setprecision ( 6 ) << fixed << answer << "\n" ;

	return 0;
}
