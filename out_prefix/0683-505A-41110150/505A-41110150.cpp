#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int flag = -1;
	int sz = s.size();
	for (int i = 0; i < 26; i++) 
		{ string a;
		a.push_back('a' + i);
		a += s;
		for (int j = 0; j < sz; j++) 
			{ string b = a;
			reverse(b.begin(), b.end());
			if (a == b) 
				{ cout << a << endl;
				return 0;
			}
			swap(a[j], a[j + 1]);
		}
		string b = a;
		reverse(b.begin(), b.end());
		if (a == b) 
			{ cout << a << endl;
			return 0;
		}
	}
	cout << "NA" << endl ;

	return 0;
}
