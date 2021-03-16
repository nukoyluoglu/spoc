#include <bits/stdc++.h>

using namespace std;

int arr[1000000], a[1000], ar[100000];
map<char, int> m;
map<char, int> mm;
int main() 
	{ string s, m, k = "", n = "";
	int x;
	cin >> s >> x;
	for (int i = 0; i < x; i++) 
		{ cin >> m;
		if (m.size() >= s.size()) 
			{ n = m.substr(0, s.size());
			if (n == s && (m <= k || k == "")) { k = m; }
		}
	}
	if (k != "")
		{ cout << k << endl;
	} else
		{ cout << s << endl ;

	} return 0;
}
