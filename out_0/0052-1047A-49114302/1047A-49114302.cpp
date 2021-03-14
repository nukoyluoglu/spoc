#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n, a, b, c;
	cin >> n;
	if (n % 3 == 0 || n % 3 == 1) 
		{ a = n - 2;
		b = 1;
		c = 1;
	}  else if (n % 3 == 2) 
		{ a = n - 3;
		b = 1;
		c = 2;
	}
	cin >> a >> b >> c ;

}
