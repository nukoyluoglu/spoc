#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k;
	char d;
	cin >> k >> d;
	if (d == '0' && k > 1) 
		{ cout << "No solution" << endl;
		return 0;
	}
	string temp;
	temp.push_back(d);
	for (int i = 1; i < k; i++) temp.push_back('0');
	cout << temp << endl ;
	return 0;
}
