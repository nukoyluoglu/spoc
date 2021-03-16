#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	double x, y;
	double z;
	double *arr = new double[n];
	for (int i = 0; i < n; i++) 
		{ cin >> x >> y;
		double q = x + (y / 100000);
		arr[i] = q;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++) 
		{ if (int(arr[i]) != int(arr[i + 1])) 
			{ if (arr[i + 1] - arr[i] < 1) 
				{ cout << "Happy Alex" << endl;
				return 0;
			}
		}
	}
	cout << "Poor Alex\n" ;

	return 0;
}
