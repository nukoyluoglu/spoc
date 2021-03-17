#include <bits/stdc++.h>

using namespace std;

int main() 
	{ cout.precision(10);
	cout << fixed;
	int n, m;
	cin >> n >> m;
	vector<int> v(m);
	for (int i = 0; i < m; i++) cin >> v[i];
	sort(v.begin(), v.end());
	vector<int> diff;
	for (int i = 0; i < m - n + 1; i++) { diff.push_back(abs(v[i] - v[n + i - 1])); }
	cout << * min_element ( diff. begin ( ), diff. end ( ) ) << endl ;

}
