#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, sum, index;
	char s[56], a[56];
	cin >> n >> s;
	sum = index = 0;
	for (int i = 0;; i++) 
		{ index += i;
		if (index >= n) break;
		a[sum++] = s[index];
	}
	a[sum] = '\0';
	cout << a << endl ;
	return 0;
}
