#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<string> v(120);
	for (int i = 0; i < 120; i += 12) 
		{ v[i] = "January";
		v[i + 1] = "February";
		v[i + 2] = "March";
		v[i + 3] = "April";
		v[i + 4] = "May";
		v[i + 5] = "June";
		v[i + 6] = "July";
		v[i + 7] = "August";
		v[i + 8] = "September";
		v[i + 9] = "October";
		v[i + 10] = "November";
		v[i + 11] = "December";
	}
	string x;
	cin >> x;
	int n, z;
	cin >> n;
	for (int i = 0; i < 120; i++) 
		{ if (v[i] == x) 
			{ z = i;
			break;
		}
	}
	cout << v [ z + n ] << endl ;

}
