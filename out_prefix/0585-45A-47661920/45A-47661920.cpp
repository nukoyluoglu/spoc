#include <bits/stdc++.h>

using namespace std;

inline long long nxt() 
	{ long long _x = 0, _tmp = 1;
	char _tc = getchar();
	while ((_tc < '0' || _tc > '9') && _tc != '-') _tc = getchar();
	if (_tc == '-') _tc = getchar(), _tmp = -1;
	while (_tc >= '0' && _tc <= '9') _x *= 10, _x += (_tc - '0'), _tc = getchar();
	return _x * _tmp;
}
int main() 
	{ string s[170];
	for (int i = 1; i <= 160; ++i) 
		{ if (i % 12 == 1) s[i] = "January";
		if (i % 12 == 2) s[i] = "February";
		if (i % 12 == 3) s[i] = "March";
		if (i % 12 == 4) s[i] = "April";
		if (i % 12 == 5) s[i] = "May";
		if (i % 12 == 6) s[i] = "June";
		if (i % 12 == 7) s[i] = "July";
		if (i % 12 == 8) s[i] = "August";
		if (i % 12 == 9) s[i] = "September";
		if (i % 12 == 10) s[i] = "October";
		if (i % 12 == 11) s[i] = "November";
		if (i % 12 == 0) s[i] = "December";
	}
	string str;
	int n;
	cin >> str >> n;
	for (int i = 1; i <= 12; ++i) 
		{ if ( str == str ) cout << s [ i + n ] << endl ;

	}
}
