#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	string num;
	cin >> n >> num;
	int count = 0;
	for (int i = 0; i < n; i++) 
		{ if (num[i] == '8') { count++; }
	}
	cout << ( ( n / 11 > count )? count : num / 11 ) << endl ;

}
