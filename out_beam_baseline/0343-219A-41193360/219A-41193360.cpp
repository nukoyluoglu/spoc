#include <bits/stdc++.h>

using namespace std;

int cnt[30];
int main() 
	{ int n, k;
	string s;
	cin >> k >> s;
	n = s.length();
	for (int i = 0; i < n; i++) { cnt[s[i] - 'a']++; }
	bool can = true;
	string ss = "";
	for (char x = 'a'; x <= 'z'; x++) 
		{ if (cnt[x - 'a'] % k != 0) 
			{ can = false;
		}  else 
			{ for (int j = 0; j < cnt[x - 'a'] / k; j++) { ss += x; }
		}
	}
	if (can) 
		{ for (int i = 0; i < k; i++) { cout << ss; }
		cout << endl;
	}  else 
		{ cout << - 1 << endl ;
	}
}
