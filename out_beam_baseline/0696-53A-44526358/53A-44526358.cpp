#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> vs;
	for (int i = 0; i < n; i++) 
		{ string ss;
		cin >> ss;
		vs.push_back(ss);
	}
	sort(vs.begin(), vs.end());
	int len = s.size();
	for (int i = 0; i < n; i++)
		{ if (vs[i].substr(0, len) == s) 
			{ cout << vs[i] << endl;
			return 0;
		}
	} cout << s << endl ;
	return 0;
}
