#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	if (n % 2 == 0)
		{ cout << arr[(n / 2) - 1] << endl;
	} else
		{ cout << arr [ n / 2 ] << endl ;

	} return 0;
}
