#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int c8 = 0;
	cin >> n;
	cin.ignore();
	char s[101];
	gets(s);
	if (n >= 11) 
		{ int r = n / 11;
		for (int i = 0; s[i]; i++) 
			{ if (s[i] == '8') c8++;
			if (c8 == r) break;
		}
		cout << c8 << endl;
		return 0;
	}
	cout << c8 << endl ;

	return 0;
}
