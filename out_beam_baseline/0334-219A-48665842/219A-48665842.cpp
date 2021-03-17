#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int count;
	cin >> count;
	string s;
	cin >> s;
	int n = s.length();
	int a[26] = {0};
	for (int i = 0; i < n; i++) { a[s[i] - 'a']++; }
	for (int i = 0; i < 26; i++) 
		{ if (a[i] % count != 0) 
			{ cout << "-1" << endl;
			return 0;
		}
	}
	string ans = "";
	for (int i = 0; i < 26; i++) 
		{ if (a[i]) 
			{ for (int j = 0; j < a[i] / count; j++) 
				{ char temp = i + 'a';
				ans = ans + temp;
			}
		}
	}
	for (int i = 0; i < count; i++) { cout << ans; }
	cout << endl ;
}
