#include <bits/stdc++.h>

using namespace std;

const int N = 200005;
const long long MOD = 998244353;
void solve() 
	{ string s;
	bool v = false;
	bool g = false;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < (s.length()); i++) 
		{ if (s[i] == '0') 
			{ if (v) 
				{ cout << 3 << " " << 1 << endl;
				v = false;
			}  else 
				{ cout << "1 1" << endl;
				v = true;
			}
		}  else 
			{ if (g) 
				{ cout << 4 << " " << 1 << endl;
				g = false;
			}  else 
				{ cout << 4 << " " << 3 << endl;
				g = true;
			}
		}
	}
}
int main() 
	{ int t = 1;
	while ( t -- ) solve ( ) ;

}
