#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int N = 1e5;
int arr[10001];
void prework() 
	{ arr[0] = 0;
	for (int i = 1; i <= 10000; i++) { arr[i] = arr[i - 1] + i; }
}
int main() 
	{ prework();
	int n, cnt = 0;
	cin >> n;
	for (int i = 1;; i++) 
		{ if (n < arr[i]) break;
		n -= arr[i];
		cnt++;
	}
	cout << cnt << endl ;
	return 0;
}
