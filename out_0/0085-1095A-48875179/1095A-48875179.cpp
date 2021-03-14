#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	char s[100];
	cin >> n >> s;
	int t = 1;
	for (int i = 0; i < n; i += t) 
		{ cout << s[i];
		t++;
	}
	cout << endl ;

	return 0;
}
