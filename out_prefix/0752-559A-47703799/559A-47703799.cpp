#include <bits/stdc++.h>

using namespace std;

int a[7];
int p(int x) 
	{ return x * x;
}
int main() 
	{ for (int i = 1; i <= 6; i++) { cin >> a[i]; }
	int ans = p(a[1] + a[2] + a[3]) - p(a[1]) - p(a[3]) - p(a[5]);
	cout << ans << endl ;

	return 0;
}
