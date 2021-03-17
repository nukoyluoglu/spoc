#include <bits/stdc++.h>

using namespace std;

string str, s[105];
vector<string> s1;
int n;
int main() 
	{ cin >> str;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s, s + n);
	for (int i = 0; i < n; i++) 
		{ if (s[i].find(str) == 0) s1.push_back(s[i]);
	}
	if (s1.size())
		{ cout << s1[0] << "\n";
	} else
		{ cout << str << endl ;
	} return 0;
}
