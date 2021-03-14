#include <bits/stdc++.h>

using namespace std;

bool isp(char c) 
	{ if (c == '.' or c == ',' or c == '!' or c == '?') return true;
	return false;
}
int main() 
	{ string s;
	getline(cin, s);
	int len = s.size();
	string s2;
	int lenn = len - 1;
	for (int i = 0; i < lenn; i++) 
		{ if (s[i] == ' ' and (s[i + 1] == ' ' or isp(s[i + 1]))) continue;
		s2 += s[i];
		if (isp(s[i]) and s[i + 1] != ' ') s2 += ' ';
	}
	s2 += s[len - 1];
	cout << s2 << endl ;

}
