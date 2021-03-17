#include <bits/stdc++.h>

using namespace std;

string in;
string n = "";
int main() 
	{ getline(cin, in);
	int m = in.size();
	bool se = false;
	for (int i = 0; i < m; i++) 
		{ if (in[i] >= 'a' && in[i] <= 'z') 
			{ n += in[i];
		}  else if (in[i] == ' ') 
			{ if (n == " ") { continue; }
			cout << n;
			n = ' ';
			se = true;
			continue;
		}  else 
			{ if (se && n == " ") 
				{ cout << in[i];
				n = ' ';
				se = false;
				continue;
			}
			cout << n << in[i];
			n = ' ';
		}
	}
	if (n != " ") { cout << n; }
	cout << endl ;
	return 0;
}
