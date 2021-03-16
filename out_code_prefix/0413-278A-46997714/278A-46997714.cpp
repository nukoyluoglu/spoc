#include <bits/stdc++.h>

using namespace std;

int K, A[105], X, Y, M, N;
int main() 
	{ cin >> K;
	for (int i = 1; i <= K; i++) 
		{ cin >> A[i];
		N += A[i];
	}
	cin >> X >> Y;
	for (int i = min(X, Y); i < max(X, Y); i++) { M += A[i]; }
	cout << min ( M, N - M ) << endl ;

}
