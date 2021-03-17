#include <bits/stdc++.h>

using namespace std;

string n, n2;
bool compare(string s1, string s2, int length) 
	{ for (int i = 0; i < length; i++) 
		{ if (s1[i] != s2[i]) { return false; }
	}
	return true;
}
int main() 
	{ cin >> n >> n2;
	int l1, l2, greater;
	l1 = greater = n.length();
	l2 = n2.length();
	if (l2 > l1) { greater = l2; }
	if (l1 == l2) 
		{ bool x = compare(n, n2, l1);
		if (x) 
			{ cout << -1 << endl;
			return 0;
		}  else 
			{ cout << l1 << endl;
			return 0;
		}
	}
	cout << greater << endl ;
	return 0;
}
