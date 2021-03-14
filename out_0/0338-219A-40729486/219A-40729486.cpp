#include <bits/stdc++.h>

using namespace std;

void solve(string str, int k) 
	{ int cnt[26];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < str.length(); i++) cnt[str[i] - 'a']++;
	string s1;
	int i = 0;
	for (; i < 26; i++) 
		{ if (cnt[i] % k != 0)
			{ break;
		} else 
			{ s1.append(cnt[i] / k, 'a' + i);
		}
	}
	if (i == 26) 
		{ while (k--) { cout << s1; }
		cout << endl;
	}  else 
		{ cout << "-1" << endl;
	}
}
int main() 
	{ int k;
	cin >> k;
	string str;
	cin >> str;
	solve ( str, k ) ;

	return 0;
}
