#include <bits/stdc++.h>

using namespace std;

int n, a, b;
int chores[2000];
int main() 
	{ cin >> n >> a >> b;
	for (int i = 0; i < n; i++) { cin >> chores[i]; }
	sort(chores, chores + n);
	cout << chores [ 0 ] - chores [ b - 1 ] << endl ;

}
