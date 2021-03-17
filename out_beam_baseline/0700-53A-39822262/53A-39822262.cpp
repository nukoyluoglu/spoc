#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string *ch, var;
	int n;
	cin >> var >> n;
	ch = new string[n];
	for (int i = 0; i < n; i++) cin >> ch[i];
	sort(ch, ch + n);
	for (int i = 0; i < n; i++) 
		{ if (ch[i].find(var) == 0) 
			{ cout << ch[i] << endl;
			return 0;
		}
	}
	cout << var << endl ;
	return 0;
}
