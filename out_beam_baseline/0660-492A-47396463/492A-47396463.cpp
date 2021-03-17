#include <bits/stdc++.h>

using namespace std;

int need(int a) 
	{ int b = 0;
	for (int i = 1; i <= a; i++) { b += i; }
	return b;
}
int main() 
	{ int a;
	cin >> a;
	int i = 0;
	while (a >= need(i)) 
		{ a -= need(i);
		i++;
	}
	cout << i - 1 << endl ;
}
