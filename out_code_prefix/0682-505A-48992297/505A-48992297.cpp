#include <bits/stdc++.h>

using namespace std;

string s;
int main() 
	{ cin >> s;
	for (char c = 'a'; c <= 'z'; c++)
		{ for (int i = 0; i <= s.size(); i++) 
			{ string t = s;
			t.insert(i, 1, c);
			string k = t;
			reverse(k.begin(), k.end());
			if (k == t) 
				{ cout << t << endl;
				return 0;
			}
		}
	} cout << "NA\n" ;

	return 0;
}
