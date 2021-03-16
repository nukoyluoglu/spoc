#include <bits/stdc++.h>

using namespace std;

string T;
long long N, K, M, A, B, C[2005], D, sum;
int main() 
	{ cin >> N >> A >> B;
	for (int i = 1; i <= N; i++) { cin >> C[i]; }
	sort(C + 1, C + N + 1);
	cout << C [ B + 1 ] - C [ N ] <<'\n';

}
