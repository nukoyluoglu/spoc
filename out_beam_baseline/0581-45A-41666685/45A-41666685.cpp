#include <bits/stdc++.h>

using namespace std;

map<int, string> m;
map<int, string>::iterator it;
int main() 
	{ char s[20];
	int n;
	m[0] = "January";
	m[1] = "February";
	m[2] = "March";
	m[3] = "April";
	m[4] = "May";
	m[5] = "June";
	m[6] = "July";
	m[7] = "August";
	m[8] = "September";
	m[9] = "October";
	m[10] = "November";
	m[11] = "December";
	while (cin >> s >> n) 
		{ int j = 0;
		for (it = m.begin(); it != m.end(); it++) 
			{ ++j;
			if (it->second == s) break;
		}
		cout << m [ ( j + n - 1 ) % 12 ] << endl ;
	}
	return 0;
}
