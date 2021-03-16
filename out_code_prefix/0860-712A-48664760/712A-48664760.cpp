#include <bits/stdc++.h>

using namespace std;

int a[100005];
int main() 
	{ int n;
	while (cin >> n) 
		{ for (int i = 1; i <= n; i++) { cin >> a[i]; }
		for (int i = 1; i < n; i++) { cout << a[i] + a[i + 1] << ' '; }
		cout << a [ n ] ;

	}
}
