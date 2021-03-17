#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int *a = new int[n];
	long long int min = 99999999999999999;
	for (int i = 0; i < n; i++) 
		{ cin >> a[i];
		if (a[i] < min) { min = a[i]; }
	}
	int p[100000];
	int c = 0;
	for (int i = 0; i < n; i++) 
		{ if (a[i] == min) 
			{ p[c] = i;
			c++;
		}
	}
	min = 99999999999999999;
	for (int i = 1; i < c; i++) 
		{ int r = p[i] - p[i - 1];
		if (r < min) { min = r; }
	}
	cout << min << endl ;
}
