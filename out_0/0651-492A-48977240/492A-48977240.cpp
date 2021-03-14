#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int ans = 0, t = 1, q = 1;
	ans = ans + t;
	while (n >= ans) 
		{ q++;
		t = t + q;
		ans = ans + t;
	}
	cout << q - 1 << endl ;

}
