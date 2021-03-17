#include <bits/stdc++.h>

using namespace std;

int num[101];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; i++) num[i] = i + 1;
	if (n % 2)
		{ cout << -1 << endl;
	} else 
		{ for (int i = 1; i < n; i += 2) { swap(num[i - 1], num[i]); }
		for (int i = 0; i < n - 1; i++) cout << num[i] << " ";
		cout << num [ n - 1 ] << endl ;
	}
}
