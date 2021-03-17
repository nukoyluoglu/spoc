#include <bits/stdc++.h>

using namespace std;

int sq(int a) 
	{ return a * a;
}
int main() 
	{ int A[6], i, j, k, a, b, c;
	for (i = 0; i < 6; i++) { cin >> A[i]; }
	a = A[0] + A[1] + A[2];
	b = sq(a);
	c = sq(A[0]) + sq(A[2]) + sq(A[4]);
	j = b - c;
	cout << j << endl ;

	return 0;
}
