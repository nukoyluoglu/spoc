#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int ans = 0;
	int temp = 0;
	for (int i = 0; i < n; i++) 
		{ int a, b;
		cin >> a >> b;
		temp -= a;
		temp += b;
		ans = max(temp, ans);
	}
	cout << ans << endl ;

}
