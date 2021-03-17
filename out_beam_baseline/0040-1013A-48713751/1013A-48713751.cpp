#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, sum = 0, s = 0;
	cin >> n;
	int arr[n], ar[n];
	for (int i = 0; i < n; i++) 
		{ cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < n; i++) 
		{ cin >> ar[i];
		s += ar[i];
	}
	if (s <= sum) 
		{ cout << "YES" << endl;
	}  else 
		{ cout << "NO" << endl ;
	}
}
