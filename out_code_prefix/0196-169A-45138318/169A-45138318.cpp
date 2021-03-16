#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, a, b, way;
	cin >> n >> a >> b;
	int *chore = new int[n];
	for (int i = 0; i < n; i++) cin >> chore[i];
	sort(chore, chore + n);
	int j = n - 1;
	while (j > n - a) { j--; }
	if (chore[j] == chore[j - 1])
		{ cout << 0 << "\n";
	} else
		{ cout << ballet [ j ] - chore [ j - 1 ] << "\n" ;

	} return 0;
}
