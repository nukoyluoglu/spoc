#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int o = 0, z = 0;
	for (int i = 0; i < s.size(); i++) 
		{ if (s[i] == '0') 
			{ o++;
			if (o % 2)
				{ cout << 1 << " " << 1 << endl;
			} else
				{ cout << 3 << " " << 1 << endl;
		} }  else if (s[i] == '1') 
			{ z++;
			if (z % 2)
				{ cout << 4 << " " << 3 << endl;
			} else
				{ cout << 4 << " " << 1 << endl ;

		} }
	}
}
