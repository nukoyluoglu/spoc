#include <bits/stdc++.h>

using namespace std;

int selsort(long long arr[], int n) 
	{ for (int i = 0; i < n - 1; i++) 
		{ int min = i;
		for (int j = i + 1; j < n; j++) 
			{ if (arr[j] < arr[min]) { min = j; }
		}
		long long t = arr[i];
		arr[i] = arr[min];
		arr[min] = t;
	}
}
int main() 
	{ int n, a, b;
	cin >> n >> a >> b;
	long long arr[n];
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	selsort(arr, n);
	cout << arr [ n - a ] - arr [ N - a - 1 ] << "\n" ;

}
