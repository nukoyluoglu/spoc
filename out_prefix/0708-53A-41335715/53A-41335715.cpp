#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	int n;
	cin >> s >> n;
	int trig = 0;
	int c = 0;
	string *a = new string[n];
	int k = 0;
	int j = 0;
	string s2;
	int z = s.length();
	for (int i = 0; i < n; i++) 
		{ cin >> s2;
		a[i] = s2;
	}
	for (int i = 0; i < s.length(); i++) 
		{ if (s[i] != a[j][k]) 
			{ trig = 1;
			c++;
		}  else 
			{ k++;
		}
		if (z == k) 
			{ trig = 3;
			break;
		}
		if (trig == 1) 
			{ j++;
			i = -1;
			k = 0;
			trig = 0;
		}
		if (c == n) 
			{ trig = 5;
			break;
		}
	}
	if (trig == 5) 
		{ cout << s << endl;
		return 0;
	}
	sort(a, a + n);
	string t = "";
	if (trig == 3) 
		{ for (int i = 0; i < n; i++) 
			{ t = a[i];
			for (int ind = 0; ind < s.length(); ind++) 
				{ if (s[ind] != t[ind]) 
					{ a[i] = '0';
					break;
				}
			}
			t = "";
		}
	}
	for (int i = 0; i < n; i++) 
		{ if (a[i] != "0") 
			{ cout << a[i] << endl;
			return 0;
		}
	}
	cout << s ;

	return 0;
}
