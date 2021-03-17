#include <bits/stdc++.h>

using namespace std;

int N;
long long A[200005];
int main() 
	{ cin >> N;
	for (int i = 0; i <= 2 * N - 1; i++) cin >> A[i];
	sort(A, A + 2 * N);
	long long Ans = (A[N - 1] - A[0]) * (A[2 * N - 1] - A[N]);
	for (int i = 1; i <= N - 1; i++) { Ans = min(Ans, (A[2 * N - 1] - A[0]) * (A[i + N - 1] - A[i])); }
	cout << Ans <<'\n';
	return 0;
}
