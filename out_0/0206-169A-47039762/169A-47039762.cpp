#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<int> h;
	int a, b, n, num;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) 
		{ cin >> num;
		h.push_back(num);
	}
	sort(h.begin(), h.end());
	if (h[b - 1] == h[b])
		{ cout << 0 << endl;
	} else
		{ cout << h [ a ] - h [ b - 1 ] << endl ;

	} return 0;
}
