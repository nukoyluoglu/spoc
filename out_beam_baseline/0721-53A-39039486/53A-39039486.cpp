#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string *str, var;
	int n;
	cin >> var >> n;
	str = new string[n];
	for (int i = 0; i < n; i++) cin >> str[i];
	sort(str, str + n);
	for (int i = 0; i < n; i++) 
		{ if (str[i].find(var) == 0) 
			{ cout << str[i] << endl;
			return 0;
		}
	}
	cout << var << endl ;
	return 0;
}
