#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; i++) { cin >> a[i]; }
	sort(a, a + m);
	int i = 0, j = n - 1;
	int psum = a[j] - a[i];
	while (j < m) 
		{ int sum = a[j] - a[i];
		if (sum <= psum) psum = sum;
		i++;
		j++;
	}
	cout << psum << "\n" ;

}
