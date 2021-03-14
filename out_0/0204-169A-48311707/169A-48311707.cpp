#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b;
	vector<int> h;
	cin >> n >> a >> b;
	h.resize(n);
	for (int i = 0; i < n; i++) { cin >> h[i]; }
	sort(h.begin(), h.end(), greater<int>());
	int min_petya = h[a - 1];
	int max_vasya = h[a];
	if (min_petya == max_vasya) 
		{ cout << 0 << endl;
	}  else 
		{ cout << min_petya - max_vasya << endl ;

	}
	return 0;
}
