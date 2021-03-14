#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, i;
	cin >> n;
	long long int arr[n];
	for (i = 0; i < n; i++) { cin >> arr[i]; }
	for (i = 0; i < n; i++) 
		{ if (i == n - 1) 
			{ cout << arr[n - 1] << endl;
		}  else 
			{ cout << arr [ i ] + arr [ j + 1 ] << " " ;

		}
	}
}
