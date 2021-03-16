#include <bits/stdc++.h>

using namespace std;

int ar[12];
int main() 
	{ int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	ar[a]++;
	ar[b]++;
	ar[c]++;
	ar[d]++;
	ar[e]++;
	ar[f]++;
	bool paichi = false;
	for (int i = 1; i <= 9; i++) 
		{ if (ar[i] >= 4) { paichi = true; }
	}
	if (!paichi) return cout << "Alien\n", 0;
	int cnt = 0;
	for (int i = 1; i <= 9; i++) 
		{ if (ar[i] == 2 or ar[i] == 6) return cout << "Elephant\n", 0;
	}
	cout << "Bear" << endl ;

	return 0;
}
