#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a[100001], b[100001], count = 0, i, j, n;
	cin >> n;
	for (i = 0; i < n; i++) { cin >> a[i] >> b[i]; }
	for (j = 0; j < n; j++) 
		{ if (a[j] != b[j]) 
			{ cout << "Happy Alex" << endl;
			count = 1;
			break;
		}
	}
	if ( count == 0 ) { cout << "Poor Alex" << endl ; }

	return 0;
}
