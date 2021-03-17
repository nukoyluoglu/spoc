#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str, str2, s;
	int num, i;
	while (cin >> num >> str) 
		{ sort(str.begin(), str.end());
		for (i = 0; i < str.size(); i += num) { str2 += str[i]; }
		for (i = 0; i < num; i++) { s += str2; }
		str2 = s;
		sort(str2.begin(), str2.end());
		if (str2 != str) 
			{ cout << -1 << endl;
			;
		}  else 
			{ cout << s << endl ;
		}
	}
	return 0;
}
