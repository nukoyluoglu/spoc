#include <bits/stdc++.h>

using namespace std;

int Addition(int n) 
	{ int s;
	s = (n * (1 + n)) / 2;
	return s;
}
int main() 
	{ int a, i = 0;
	cin >> a;
	if (a > 0) 
		{ a = a - Addition(i);
		while (a > 0) 
			{ i++;
			a = a - Addition(i + 1);
		}
		cout << i << endl;
	}  else
		{ cout << "0" << endl ;

} }
