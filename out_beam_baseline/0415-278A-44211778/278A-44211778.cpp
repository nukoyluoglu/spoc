#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, sum = 0, sum1 = 0, a, b;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++) { cin >> x[i]; }
	cin >> a >> b;
	for (int i = min(a - 1, b - 1); i < max(b - 1, a - 1); i++) { sum += x[i]; }
	for (int i = min(a - 1, b - 1) - 1; i >= 0; i--) sum1 += x[i];
	for (int i = n - 1; i >= max(b - 1, a - 1); i--) sum1 += x[i];
	cout << min ( sum, sum1 ) << endl ;
}
