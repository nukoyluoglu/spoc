#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
const int mod = 998244353;
int n;
string x;
map<int, int> m;
int main() 
	{ cin >> n >> x;
	for (int i = 0; i < n; i++) m[x[i] - '0']++;
	int s = x.size();
	cout << min ( m [ 8 ], s / 11 ) << endl ;
}
