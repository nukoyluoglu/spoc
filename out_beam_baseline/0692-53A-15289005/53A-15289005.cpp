#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	string str, s, ans, min = "z";
	cin >> str >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> s;
		if (s == str) 
			{ min = str;
			break;
		}
		if ((s.find(str) == 0) && (s < min)) min = s;
	}
	if (min == "z")
		{ cout << str << endl;
	} else
		{ cout << min << endl ;
	} return 0;
}
