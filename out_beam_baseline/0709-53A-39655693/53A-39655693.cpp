#include <bits/stdc++.h>

using namespace std;

string p, s, ans;
int n;
int main() 
	{ cin >> p >> n;
	ans = "";
	while (n--) 
		{ cin >> s;
		if ((int)s.size() >= (int)p.size()) 
			{ string aux = s.substr(0, (int)p.size());
			if (aux == p && (s < ans || ans == "")) { ans = s; }
		}
	}
	putchar ( ans == " "? p : ans ) ;

}
