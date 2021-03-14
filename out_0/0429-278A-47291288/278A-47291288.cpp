#include <bits/stdc++.h>

using namespace std;

int N;
int x, s, t;
vector<int> d;
int main() 
	{ cin >> N;
	for (int i = 0; i < N; ++i) cin >> x, d.push_back(x);
	cin >> s >> t;
	if ((--s) > (--t)) swap(s, t);
	int d1 = 0;
	for (int i = s; i < t; ++i) d1 += d[i];
	int d2 = 0;
	for (int i = t; i < N; ++i) d2 += d[i];
	for (int i = 0; i < s; ++i) d2 += d[i];
	cout << min ( d1, d2 ) << endl ;

	return 0;
}
