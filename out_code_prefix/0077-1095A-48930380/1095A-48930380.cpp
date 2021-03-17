#include <bits/stdc++.h>

using namespace std;

int compare(pair<string, int> p1, pair<string, int> p2) 
	{ return (p1.second > p2.second);
}
int main() 
	{ int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	int h = 1;
	int c = 1;
	for (int i = 0; i < int(s.size()); i++) 
		{ if (c == h) 
			{ ans += s[i];
			h++;
			c = 1;
		}  else
			{ c++;
	} }
	cout << ans << endl;
	cin >> n ;

}
