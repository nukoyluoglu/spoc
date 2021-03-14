#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str, str2, ans = "a";
	int n, flag = 0;
	cin >> str;
	int len = str.length();
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> str2;
		flag = 0;
		for (int j = 0; j < len; j++) 
			{ if (str[j] != str2[j]) 
				{ flag = 1;
				break;
			}
		}
		if (flag == 1) { continue; }
		if (ans == "a") 
			{ ans = str2;
		}  else if (str2 < ans) 
			{ ans = str2;
		}
	}
	if (ans != "a") 
		{ cout << ans << endl;
	}  else 
		{ cout << str << "\n" ;

	}
	return 0;
}
