#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int a = 0;
	int b = 1;
	int c = 0;
	cin >> n;
	while (true) 
		{ for (int i = 1; i <= b; i++) { a += i; }
		b++;
		if (a > n) { break; }
		c++;
	}
	cout << c << endl ;
	return 0;
}
