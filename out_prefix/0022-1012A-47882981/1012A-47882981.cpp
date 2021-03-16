#include <bits/stdc++.h>

using namespace std;

int niz[200005];
int main() 
	{ int n;
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) { cin >> niz[i]; }
	sort(niz + 1, niz + 2 * n + 1);
	int dx = niz[n] - niz[1];
	int dy = niz[2 * n] - niz[n + 1];
	long long int p = 0;
	p = (long long int)dx * dy;
	long long int tren = 0;
	for (int i = n + 1; i <= 2 * n - 1; i++) 
		{ tren = (long long int)(niz[i] - niz[i - n + 1]) * (niz[2 * n] - niz[1]);
		if (tren < p) p = tren;
	}
	cout << p << endl ;

	return 0;
}
