#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string *a, s;
	int n;
	cin >> s >> n;
	a = new string[n];
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	sort(a, a + n);
	for (int i = 0; i < n; i++) 
		{ if (a[i].find(s) == 0) 
			{ cout << a[i] << endl;
			return 0;
		}
	}
	cout << s ;

	return 0;
}
