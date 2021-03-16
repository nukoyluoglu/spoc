#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s, s1;
	int n, k;
	cin >> n >> k;
	if (k > n || (k == 1 && n > 1)) return cout << "-1" << endl, 0;
	if (k == 1) return cout << "a" << endl, 0;
	for (int i = 1; i <= k - 2; i++) s += 'b' + i;
	for (int i = 1; i <= n - k + 2; i++) s1 += i % 2 ? 'a' : 'b';
	cout << s1 << " " << s << endl ;

}
