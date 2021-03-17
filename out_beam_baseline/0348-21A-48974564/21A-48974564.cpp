#include <bits/stdc++.h>

using namespace std;

bool l(char c) 
	{ if (c >= 'a' && c <= 'z') { return true; }
	if (c >= 'A' && c <= 'Z') { return true; }
	if (c >= '0' && c <= '9') { return true; }
	if (c == '_') { return true; }
	return false;
}
bool un(string s) 
	{ int n = s.size();
	if (n == 0 || n > 16) { return false; }
	for (int i = 0; i < n; i++) 
		{ if (!l(s[i])) { return false; }
	}
	return true;
}
bool hn(string s) 
	{ int n = s.size(), i, nw = 0;
	if (n == 0 || n > 32) { return false; }
	s += '.';
	for (i = 0; i < n + 1; i++) 
		{ if (s[i] == '.') 
			{ if (nw == 0 || nw > 16) { return false; }
			nw = 0;
		}  else 
			{ if (!l(s[i])) { return false; }
			nw++;
		}
	}
	return true;
}
bool r(string s) 
	{ return un(s);
}
bool f(string s) 
	{ int n = s.size(), i, j;
	for (i = 0; i < n; i++) 
		{ if (s[i] == '@') { break; }
	}
	if (i == n) { return false; }
	if (!un(s.substr(0, i))) { return false; }
	for (j = i + 1; j < n; j++) 
		{ if (s[j] == '/') { break; }
	}
	if (!hn(s.substr(i + 1, j - i - 1))) { return false; }
	if (j != n && !r(s.substr(j + 1))) { return false; }
	return true;
}
string s;
int main() 
	{ cin >> s;
	if (f(s)) 
		{ cout << "YES" << endl;
	}  else 
		{ cout << "NO" << endl ;
	}
	return 0;
}
