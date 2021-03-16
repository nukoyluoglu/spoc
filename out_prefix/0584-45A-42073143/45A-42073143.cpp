#include <bits/stdc++.h>

using namespace std;

int num[3005];
map<string, int> ma;
int ans = 0;
bool is_prime(int u);
int main() 
	{ string s;
	s = "January";
	ma[s] = 1;
	s = "February";
	ma[s] = 2;
	s = "March";
	ma[s] = 3;
	s = "April";
	ma[s] = 4;
	s = "May";
	ma[s] = 5;
	ma["June"] = 6;
	ma["July"] = 7;
	ma["August"] = 8;
	ma["September"] = 9;
	ma["October"] = 10;
	ma["November"] = 11;
	ma["December"] = 12;
	int n;
	cin >> s;
	cin >> n;
	if (n % 12 == 0)
		{ cout << s << endl;
	} else 
		{ int a = ma[s];
		n += a;
		if (n % 12 == 1) cout << "January" << endl;
		if (n % 12 == 2) cout << "February" << endl;
		if (n % 12 == 3) cout << "March" << endl;
		if (n % 12 == 4) cout << "April" << endl;
		if (n % 12 == 5) cout << "May" << endl;
		if (n % 12 == 6) cout << "June" << endl;
		if (n % 12 == 7) cout << "July" << endl;
		if (n % 12 == 8) cout << "August" << endl;
		if (n % 12 == 9) cout << "September" << endl;
		if (n % 12 == 10) cout << "October" << endl;
		if (n % 12 == 11) cout << "November" << endl;
		if ( n % 12 == 0 ) { cout << "December" << endl ; }

	}
}
