#include <bits/stdc++.h>

using namespace std;

void fastIo() {}
int main() 
	{ fastIo();
	int n;
	cin >> n;
	map<pair<int, int>, int> m;
	for (int i = 0; i < n; i++) 
		{ int x, y;
		cin >> x >> y;
		m[make_pair(x, y)]++;
	}
	map<pair<int, int>, int>::iterator it = m.begin();
	int cnt = 1;
	while (it != m.end()) 
		{ if (it->second > cnt) cnt = it->second;
		it++;
	}
	cout << cnt << endl ;

	return 0;
}
