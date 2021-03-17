#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b;
	cin >> n >> a >> b;
	int p[n];
	for (int i = 0; i < n; i++) { cin >> p[i]; }
	sort(p, p + n);
	long long count = 0;
	if (p[b - 1] != p[b]) 
		{ count += p[b] - p[b - 1];
		cout << count << endl;
	}  else 
		{ cout << "0" << endl ;

	}
	return 0;
}
