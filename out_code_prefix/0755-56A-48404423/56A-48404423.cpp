#include <bits/stdc++.h>

using namespace std;

string s;
int ans = 0;
void make() 
	{ int len = s.length();
	if (s[0] <= '9' && s[0] >= '0') 
		{ int year = 0;
		for (int i = 0; i < len; i++) { year = year * 10 + s[i] - '0'; }
		if (year < 18) { ans++; }
	}  else 
		{ if (s == "BRANDY") 
			{ ans++;
		}  else if (s == "BEER") 
			{ ans++;
		}  else if (s == "ABSINTH") 
			{ ans++;
		}  else if (s == "CHAMPAGNE") 
			{ ans++;
		}  else if (s == "GIN") 
			{ ans++;
		}  else if (s == "RUM") 
			{ ans++;
		}  else if (s == "SAKE") 
			{ ans++;
		}  else if (s == "TEQUILA") 
			{ ans++;
		}  else if (s == "VODKA") 
			{ ans++;
		}  else if (s == "WHISKEY") 
			{ ans++;
		}  else if (s == "WINE") 
			{ ans++;
		}
	}
}
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> s;
		make();
	}
	cout << ans << endl ;

	return 0;
}
