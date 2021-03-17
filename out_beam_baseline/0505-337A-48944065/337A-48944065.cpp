#include <bits/stdc++.h>

using namespace std;

int A[100010];
int main() 
	{ int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> A[i];
	sort(A, A + m);
	int high = n - 1, low = 0;
	int mini = A[high] - A[low];
	while (high < m) 
		{ low++;
		high++;
		if (high < m) mini = min(mini, A[high] - A[low]);
	}
	cout << mini << endl ;
}
