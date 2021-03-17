#include <bits/stdc++.h>

using namespace std;

const int maxn = 5e3 + 5;
const unsigned long long base = 311;
unsigned long long A[maxn];
int main() 
	{ int N;
	cin >> N;
	int a, b;
	cin >> a >> b;
	for (int i = (1); i <= (N); i += (1)) cin >> A[i];
	sort(A + 1, A + N + 1);
	cout <<A [ b + 1 ] - A [ b ] << "\n" ;
	return 0;
}
