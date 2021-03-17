#include <bits/stdc++.h>

using namespace std;

int main() 
	{ char s1[100006], s2[100003];
	while (cin >> s1 >> s2) 
		{ int p = strcmp(s1, s2);
		int len1 = strlen(s1);
		int len2 = strlen(s2);
		if (p == 0) 
			{ cout << "-1" << endl;
			return 0;
		}
		if (len1 > len2)
			{ cout << len1 << endl;
		} else
			{ cout << len2 << endl ;
	} }
}
